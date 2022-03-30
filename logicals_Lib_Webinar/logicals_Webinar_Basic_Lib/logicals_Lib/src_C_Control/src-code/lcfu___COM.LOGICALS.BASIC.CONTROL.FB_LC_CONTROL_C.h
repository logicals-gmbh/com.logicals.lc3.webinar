#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C__H
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C
{
  LC_TD_REAL LC_VD_KS;
  LC_TD_REAL LC_VD_TU;
  LC_TD_REAL LC_VD_TG;
  LC_TD_BOOL LC_VD_PI;
  LC_TD_BOOL LC_VD_PID;
  LC_TD_REAL LC_VD_P_K;
  LC_TD_REAL LC_VD_PI_K;
  LC_TD_REAL LC_VD_PI_TN;
  LC_TD_REAL LC_VD_PID_K;
  LC_TD_REAL LC_VD_PID_TN;
  LC_TD_REAL LC_VD_PID_TV;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_KP;
  LC_TD_REAL LC_VD_TN;
  LC_TD_REAL LC_VD_TV;
  LC_TD_REAL LC_VD_KI;
  LC_TD_REAL LC_VD_KD;
} LCCG_StructAttrib LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_KS)); \
  LC_INIT_REAL(&((p)->LC_VD_TU)); \
  LC_INIT_REAL(&((p)->LC_VD_TG)); \
  LC_INIT_BOOL(&((p)->LC_VD_PI)); \
  LC_INIT_BOOL(&((p)->LC_VD_PID)); \
  (p)->LC_VD_P_K = (LC_TD_REAL)1.0; \
  (p)->LC_VD_PI_K = (LC_TD_REAL)0.9; \
  (p)->LC_VD_PI_TN = (LC_TD_REAL)3.33; \
  (p)->LC_VD_PID_K = (LC_TD_REAL)1.2; \
  (p)->LC_VD_PID_TN = (LC_TD_REAL)2.0; \
  (p)->LC_VD_PID_TV = (LC_TD_REAL)0.5; \
  LC_INIT_REAL(&((p)->LC_VD_KP)); \
  LC_INIT_REAL(&((p)->LC_VD_TN)); \
  LC_INIT_REAL(&((p)->LC_VD_TV)); \
  LC_INIT_REAL(&((p)->LC_VD_KI)); \
  LC_INIT_REAL(&((p)->LC_VD_KD)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_KS),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TU),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TG),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PI),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PID),RF); \
  if (RF==0) (p)->LC_VD_P_K = (LC_TD_REAL)1.0; \
  if (RF==0) (p)->LC_VD_PI_K = (LC_TD_REAL)0.9; \
  if (RF==0) (p)->LC_VD_PI_TN = (LC_TD_REAL)3.33; \
  if (RF==0) (p)->LC_VD_PID_K = (LC_TD_REAL)1.2; \
  if (RF==0) (p)->LC_VD_PID_TN = (LC_TD_REAL)2.0; \
  if (RF==0) (p)->LC_VD_PID_TV = (LC_TD_REAL)0.5; \
  LC_WINIT_REAL(&((p)->LC_VD_KP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TV),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_KI),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_KD),RF); \
}

/*                            Prototype                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C(LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
