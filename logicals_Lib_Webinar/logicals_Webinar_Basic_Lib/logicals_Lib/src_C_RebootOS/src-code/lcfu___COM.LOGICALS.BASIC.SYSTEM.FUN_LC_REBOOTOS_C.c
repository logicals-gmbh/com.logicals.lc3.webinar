#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFUN_LC_REBOOTOS_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFUN_LC_REBOOTOS_C__C

#include <lcfu___COM.LOGICALS.BASIC.SYSTEM.FUN_LC_REBOOTOS_C.h>
#include <stdio.h>
#include <stdlib.h>

/*                            Functions                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFUN_LC_REBOOTOS_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFUN_LC_REBOOTOS_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	  /* Vendor Code */
	  system("reboot");
}

#endif
