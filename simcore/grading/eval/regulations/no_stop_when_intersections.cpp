// Copyright 2024 Tencent Inc. All rights reserved.
//

#include "no_stop_when_intersections.h"

namespace eval {
const char NoStopWhenIntersections::_kpi_name[] = "NoStopWhenIntersections";
sim_msg::TestReport_XYPlot NoStopWhenIntersections::s_no_stop_when_intersections_plot;

NoStopWhenIntersections::NoStopWhenIntersections() { VLOG_0 << "eval algorithm " << _kpi_name << " constructed.\n"; }

bool NoStopWhenIntersections::Init(eval::EvalInit &helper) {
  // determine whether the module is valid. If valid, check if kpi is enabled and get the threshold values.
  if (IsModuleValid()) {
    m_KpiEnabled = helper.getGradingKpiByName(_kpi_name, m_Kpi);
    // output indicator configuration details
    DebugShowKpi();
  }

  // set report info
  if (isReportEnabled()) {
    ReportHelper::SetCaseInfo(_case, m_Kpi);
    ReportHelper::ConfigXYPlot(s_no_stop_when_intersections_plot, "no_stop_when_intersections_within_50meter check", "",
                               "t", "s", {"result", "_cond_on_junction"}, {"OnOff", "OnOff"}, 2);

    ReportHelper::ConfigXYPlotThreshold(s_no_stop_when_intersections_plot, "stop Violation ", 0, 1, 0.5, "", 0, 0,
                                        INT32_MIN, 0);
  }

  return true;
}

bool NoStopWhenIntersections::Step(eval::EvalStep &helper) {
  // check whether the module is valid and whether the indicator is enabled
  if (!IsModuleValid() || !m_KpiEnabled) {
    VLOG_0 << _kpi_name << " kpi not enabled.\n";
    return false;
  }

  // get the ego pointer and check whether the pointer is null
  auto ego_front = _actor_mgr->GetEgoFrontActorPtr();
  if (!ego_front) {
    VLOG_0 << _kpi_name << " ego actor missing.\n";
    return false;
  }

  // get the map information pointer and check whether the pointer is null
  auto map_info = ego_front->GetMapInfo();
  if (map_info.get() == nullptr) {
    VLOG_0 << _kpi_name << " ego actor missing with map.\n";
    return false;
  }

  // param init
  bool _cond_on_junction = false;
  bool _result = false;

  // 1.get the condition
  // todo: 判断50米内？
  // whether ego is on junction
  _cond_on_junction = map_info->m_in_junction && !map_info->m_on_road;
  VLOG_1 << "cond_on_junction: " << _cond_on_junction << ".\n";

  // 2.Check Detect and report
  if (_cond_on_junction) {
    _result = (ego_front->GetSpeed().GetNormal() < 0.56);
  }

  // Detect and report
  _detector.Detect(_result, 0.5);
  VLOG_1 << "ego should no parking, current ego parking status: " << _result << " \n";

  // add data to xy-pot
  if (isReportEnabled()) {
    s_no_stop_when_intersections_plot.mutable_x_axis()->add_axis_data(helper.GetSimTime());
    s_no_stop_when_intersections_plot.mutable_y_axis()->at(0).add_axis_data(_result);
    s_no_stop_when_intersections_plot.mutable_y_axis()->at(1).add_axis_data(_cond_on_junction);
  }

  return true;
}

bool NoStopWhenIntersections::Stop(eval::EvalStop &helper) {
  // add report
  if (isReportEnabled()) {
    auto attach = _case.add_steps()->add_attach();
    ReportHelper::AddXYPlot2Attach(*attach, s_no_stop_when_intersections_plot);
  }
  return true;
}

void NoStopWhenIntersections::SetGradingMsg(sim_msg::Grading &msg) {
  // set detected event
  EvalHelper::SetDetectedEvent(msg, _detector, _kpi_name);
}

EvalResult NoStopWhenIntersections::IsEvalPass() {
  if (m_KpiEnabled) {
    _case.mutable_info()->set_detected_count(_detector.GetCount());

    if (_detector.GetCount() >= m_Kpi.passcondition().value() && m_Kpi.passcondition().value() >= 0.5) {
      return EvalResult(sim_msg::TestReport_TestState_FAIL, "ego should no parking");
    } else {
      return EvalResult(sim_msg::TestReport_TestState_PASS, "no parking check pass");
    }
  }

  return EvalResult(sim_msg::TestReport_TestState_PASS, "no parking check skipped");
}

bool NoStopWhenIntersections::ShouldStopScenario(std::string &reason) {
  auto ret = _detector.GetCount() >= m_Kpi.finishcondition().value() && m_Kpi.finishcondition().value() >= 0.5;
  if (ret) reason = "ego should no parking";
  _case.mutable_info()->set_request_stop(ret);

  return ret;
}
}  // namespace eval
