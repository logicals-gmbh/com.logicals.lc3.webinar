#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C__H
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_INT LC_VD_FUN_LC_QUAD_C;
} LCCG_StructAttrib LC_TD_Function_COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_FUN_LC_QUAD_C)); \
}

/*                            Prototype                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2ECALCx2EFUN_LC_QUAD_C* LC_this, LC_TD_INT LC_VD_VI_IN1, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
