#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C__H
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_DINT LC_VD_SEC;
  LC_TD_DINT LC_VD_MIN;
  LC_TD_DINT LC_VD_HOUR;
  LC_TD_DINT LC_VD_MDAY;
  LC_TD_DINT LC_VD_MON;
  LC_TD_DINT LC_VD_YEAR;
  LC_TD_DINT LC_VD_WDAY;
  LC_TD_DINT LC_VD_YDAY;
  LC_TD_BOOL LC_VD_ISDST;
} LCCG_StructAttrib LC_TD_Function_COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C(p) \
{ \
  LC_INIT_DINT(&((p)->LC_VD_SEC)); \
  LC_INIT_DINT(&((p)->LC_VD_MIN)); \
  LC_INIT_DINT(&((p)->LC_VD_HOUR)); \
  LC_INIT_DINT(&((p)->LC_VD_MDAY)); \
  LC_INIT_DINT(&((p)->LC_VD_MON)); \
  LC_INIT_DINT(&((p)->LC_VD_YEAR)); \
  LC_INIT_DINT(&((p)->LC_VD_WDAY)); \
  LC_INIT_DINT(&((p)->LC_VD_YDAY)); \
  LC_INIT_BOOL(&((p)->LC_VD_ISDST)); \
}

/*                            Prototype                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_READ_LOCALTIME_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
