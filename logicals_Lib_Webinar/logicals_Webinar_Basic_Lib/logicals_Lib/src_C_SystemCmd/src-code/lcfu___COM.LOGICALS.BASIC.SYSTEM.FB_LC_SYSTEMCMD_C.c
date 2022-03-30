#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C__C

#include <lcfu___COM.LOGICALS.BASIC.SYSTEM.FB_LC_SYSTEMCMD_C.h>
#include <stdio.h>
#include <stdlib.h>


/*                            FunctionBlocks                   */
void  lcfu___COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C(LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ESYSTEMx2EFB_LC_SYSTEMCMD_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	  /* Vendor Code */
	  char c_command[30] = "";
	  c_command = "sudo reboot";
	  LC_this->VOSTR_SYSCMDVAL = c_command;
}

#endif
