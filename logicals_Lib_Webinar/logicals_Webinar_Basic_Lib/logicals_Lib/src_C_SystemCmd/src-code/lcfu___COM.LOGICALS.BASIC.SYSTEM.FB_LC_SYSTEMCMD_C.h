#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C__H
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C
{
  LcCgChar LC_VD_VISTR_SYSCMD[31];
  LC_TD_BOOL LC_VD_ENO;
  LcCgChar LC_VD_VOSTR_SYSCMDVAL[256];
} LCCG_StructAttrib LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C(p) \
{ \
  LC_INIT_SIZED_STRING(&((p)->LC_VD_VISTR_SYSCMD)); \
  LC_INIT_SIZED_STRING(&((p)->LC_VD_VOSTR_SYSCMDVAL)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C(p,RF) \
{ \
  LC_WINIT_SIZED_STRING(&((p)->LC_VD_VISTR_SYSCMD),RF); \
  LC_WINIT_SIZED_STRING(&((p)->LC_VD_VOSTR_SYSCMDVAL),RF); \
}

/*                            Prototype                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C(LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
