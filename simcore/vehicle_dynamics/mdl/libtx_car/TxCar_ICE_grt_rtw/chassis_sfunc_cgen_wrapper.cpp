#include <string.h>
#ifdef MATLAB_MEX_FILE
#  include "tmwtypes.h"
#else
#  include "rtwtypes.h"
#endif

#include "chassis_sfunc_cgen_wrapper.h"

extern void chassis_sfunc_Start_wrapper(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                        const int_T p_width1);
extern void chassis_sfunc_Outputs_wrapper(const Env_Bus_Output *env_in, const Chassis_DriveLine_Input *driveline_in,
                                          Vehicle_Body_Output *body_out, Wheels_Output *wheel_out,
                                          Susp_Output *susp_out, const int8_T *lic_path, const int_T p_width0,
                                          const int8_T *par_path, const int_T p_width1);
extern void chassis_sfunc_Terminate_wrapper(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                            const int_T p_width1);
void chassis_sfunc_Start_wrapper_cgen(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                      const int_T p_width1) {
  chassis_sfunc_Start_wrapper(lic_path, p_width0, par_path, p_width1);
}

void chassis_sfunc_Outputs_wrapper_cgen(const Env_Bus_Output *env_in, const Chassis_DriveLine_Input *driveline_in,
                                        Vehicle_Body_Output *body_out, Wheels_Output *wheel_out, Susp_Output *susp_out,
                                        const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                        const int_T p_width1) {
  chassis_sfunc_Outputs_wrapper(
      const_cast<Env_Bus_Output *>(reinterpret_cast<const Env_Bus_Output *>(env_in)),
      const_cast<Chassis_DriveLine_Input *>(reinterpret_cast<const Chassis_DriveLine_Input *>(driveline_in)),
      const_cast<Vehicle_Body_Output *>(reinterpret_cast<const Vehicle_Body_Output *>(body_out)),
      const_cast<Wheels_Output *>(reinterpret_cast<const Wheels_Output *>(wheel_out)),
      const_cast<Susp_Output *>(reinterpret_cast<const Susp_Output *>(susp_out)), lic_path, p_width0, par_path,
      p_width1);
}

void chassis_sfunc_Terminate_wrapper_cgen(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                          const int_T p_width1) {
  chassis_sfunc_Terminate_wrapper(lic_path, p_width0, par_path, p_width1);
}