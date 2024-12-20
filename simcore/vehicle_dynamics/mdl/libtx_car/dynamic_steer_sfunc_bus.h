/* Generated by S-function Builder */
#ifndef _DYNAMIC_STEER_SFUNC_BUS_H_
#define _DYNAMIC_STEER_SFUNC_BUS_H_
/* Read only - STARTS */
#ifdef MATLAB_MEX_FILE
#  include "tmwtypes.h"
#else
#  include "rtwtypes.h"
#endif

#ifndef DEFINED_TYPEDEF_FOR_Ctrl_Input_
#  define DEFINED_TYPEDEF_FOR_Ctrl_Input_
typedef struct {
  uint8_T acc_control_mode;
  uint8_T brake_control_mode;
  uint8_T steer_control_mode;
  real_T target_acc_m_s2;
  real_T request_torque;
  real_T brake_pressure_01;
  real_T steer_request_torque;
  real_T steer_cmd_rad;
  uint8_T gear_cmd__0N1D2R3P;
} Ctrl_Input;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Angle_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Angle_
typedef struct {
  real_T Beta;
} BdyFrm_Angle;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Vel_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Vel_
typedef struct {
  real_T xdot;
  real_T ydot;
  real_T zdot;
} BdyFrm_Vel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Disp_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Disp_
typedef struct {
  real_T x;
  real_T y;
  real_T z;
} BdyFrm_Disp;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_DispVelAng_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_DispVelAng_
typedef struct {
  BdyFrm_Disp Disp;
  BdyFrm_Vel Vel;
  BdyFrm_Angle Ang;
} BdyFrm_DispVelAng;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Pwr_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Pwr_
typedef struct {
  real_T PwrExt;
  real_T Drag;
} BdyFrm_Pwr;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_DispVel_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_DispVel_
typedef struct {
  BdyFrm_Disp Disp;
  BdyFrm_Vel Vel;
} BdyFrm_DispVel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_LftRght_DispVel_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_LftRght_DispVel_
typedef struct {
  BdyFrm_DispVel Lft;
  BdyFrm_DispVel Rght;
} BdyFrm_LftRght_DispVel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Moment_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Moment_
typedef struct {
  real_T Mx;
  real_T My;
  real_T Mz;
} BdyFrm_Moment;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Moments_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Moments_
typedef struct {
  BdyFrm_Moment Body;
  BdyFrm_Moment Drag;
  BdyFrm_Moment Ext;
  BdyFrm_Moment Hitch;
} BdyFrm_Moments;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Force_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Force_
typedef struct {
  real_T Fx;
  real_T Fy;
  real_T Fz;
} BdyFrm_Force;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_LftRght_Force_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_LftRght_Force_
typedef struct {
  BdyFrm_Force Lft;
  BdyFrm_Force Rght;
} BdyFrm_LftRght_Force;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Tires_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Tires_
typedef struct {
  BdyFrm_LftRght_Force FrntTires;
  BdyFrm_LftRght_Force RearTires;
} BdyFrm_Tires;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Forces_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Forces_
typedef struct {
  BdyFrm_Force Body;
  BdyFrm_Force Ext;
  BdyFrm_LftRght_Force FrntAxl;
  BdyFrm_LftRght_Force RearAxl;
  BdyFrm_Force Hitch;
  BdyFrm_Tires Tires;
  BdyFrm_Force Drag;
  BdyFrm_Force Grvty;
} BdyFrm_Forces;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_AngAcc_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_AngAcc_
typedef struct {
  real_T pdot;
  real_T qdot;
  real_T rdot;
} BdyFrm_AngAcc;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Acc_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Acc_
typedef struct {
  real_T ax;
  real_T ay;
  real_T az;
  real_T xddot;
  real_T yddot;
  real_T zddot;
} BdyFrm_Acc;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_AngVel_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_AngVel_
typedef struct {
  real_T p;
  real_T q;
  real_T r;
} BdyFrm_AngVel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_BdyFrm_Cg_
#  define DEFINED_TYPEDEF_FOR_BdyFrm_Cg_
typedef struct {
  BdyFrm_Vel Vel;
  BdyFrm_Angle Ang;
  BdyFrm_AngVel AngVel;
  BdyFrm_Acc Acc;
  BdyFrm_AngAcc AngAcc;
  real_T DCM[9];
} BdyFrm_Cg;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Vehicle_BdyFrm_Output_
#  define DEFINED_TYPEDEF_FOR_Vehicle_BdyFrm_Output_
typedef struct {
  BdyFrm_Cg Cg;
  BdyFrm_Forces Forces;
  BdyFrm_Moments Moments;
  BdyFrm_LftRght_DispVel FrntAxl;
  BdyFrm_LftRght_DispVel RearAxl;
  BdyFrm_DispVel Hitch;
  BdyFrm_Pwr Pwr;
  BdyFrm_DispVelAng Geom;
} Vehicle_BdyFrm_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_Vel_
#  define DEFINED_TYPEDEF_FOR_InertFrm_Vel_
typedef struct {
  real_T Xdot;
  real_T Ydot;
  real_T Zdot;
} InertFrm_Vel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_Disp_
#  define DEFINED_TYPEDEF_FOR_InertFrm_Disp_
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} InertFrm_Disp;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_DispVel_
#  define DEFINED_TYPEDEF_FOR_InertFrm_DispVel_
typedef struct {
  InertFrm_Disp Disp;
  InertFrm_Vel Vel;
} InertFrm_DispVel;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_Axle_
#  define DEFINED_TYPEDEF_FOR_InertFrm_Axle_
typedef struct {
  InertFrm_DispVel Lft;
  InertFrm_DispVel Rght;
} InertFrm_Axle;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_Angle_
#  define DEFINED_TYPEDEF_FOR_InertFrm_Angle_
typedef struct {
  real_T phi;
  real_T theta;
  real_T psi;
} InertFrm_Angle;
#endif

#ifndef DEFINED_TYPEDEF_FOR_InertFrm_DispVelAng_
#  define DEFINED_TYPEDEF_FOR_InertFrm_DispVelAng_
typedef struct {
  InertFrm_Disp Disp;
  InertFrm_Vel Vel;
  InertFrm_Angle Ang;
} InertFrm_DispVelAng;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Vehicle_InertFrm_Output_
#  define DEFINED_TYPEDEF_FOR_Vehicle_InertFrm_Output_
typedef struct {
  InertFrm_DispVelAng Cg;
  InertFrm_Axle FrntAxl;
  InertFrm_Axle RearAxl;
  InertFrm_DispVel Hitch;
  InertFrm_DispVel Geom;
} Vehicle_InertFrm_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Vehicle_Body_Output_
#  define DEFINED_TYPEDEF_FOR_Vehicle_Body_Output_
typedef struct {
  Vehicle_InertFrm_Output InertFrm;
  Vehicle_BdyFrm_Output BdyFrm;
} Vehicle_Body_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Susp_Whl_
#  define DEFINED_TYPEDEF_FOR_Susp_Whl_
typedef struct {
  real_T F[12];
  real_T xdot[4];
  real_T ydot[4];
  real_T Ang[12];
  real_T z[4];
  real_T AngVel[12];
} Susp_Whl;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Susp_Veh_
#  define DEFINED_TYPEDEF_FOR_Susp_Veh_
typedef struct {
  real_T F[12];
  real_T M[12];
} Susp_Veh;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Susp_Output_
#  define DEFINED_TYPEDEF_FOR_Susp_Output_
typedef struct {
  Susp_Veh Veh;
  Susp_Whl Whl;
} Susp_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Wheels_Steer_Output_
#  define DEFINED_TYPEDEF_FOR_Wheels_Steer_Output_
typedef struct {
  real_T WhlAng[4];
  real_T WhlCmb[4];
} Wheels_Steer_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Wheels_TireFrame_Output_
#  define DEFINED_TYPEDEF_FOR_Wheels_TireFrame_Output_
typedef struct {
  real_T Omega[4];
  real_T Fx[4];
  real_T Fy[4];
  real_T Fz[4];
  real_T Mx[4];
  real_T My[4];
  real_T Mz[4];
  real_T Re[4];
  real_T dz[4];
  real_T z[4];
  real_T zdot[4];
  real_T Kappa[4];
  real_T Alpha[4];
} Wheels_TireFrame_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Wheels_Output_
#  define DEFINED_TYPEDEF_FOR_Wheels_Output_
typedef struct {
  Wheels_TireFrame_Output TireFrame;
  Wheels_Steer_Output Steering;
} Wheels_Output;
#endif

#ifndef DEFINED_TYPEDEF_FOR_Steer_Output_
#  define DEFINED_TYPEDEF_FOR_Steer_Output_
typedef struct {
  real_T wheel_angle[4];
  real_T steerWheelFeedback;
  real_T steerTorqueInput;
} Steer_Output;
#endif

/* Read only - ENDS */

#endif
