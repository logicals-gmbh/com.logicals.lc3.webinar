#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_WRITE_LOCALTIME_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_WRITE_LOCALTIME_C__C

#include <lcfu___COM.LOGICALS.BASIC.DATETIME.FUN_LC_WRITE_LOCALTIME_C.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*                            Functions                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_WRITE_LOCALTIME_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2EDATETIMEx2EFUN_LC_WRITE_LOCALTIME_C* LC_this, LC_TD_DINT LC_VD_SEC, LC_TD_DINT LC_VD_MIN, LC_TD_DINT LC_VD_HOUR, LC_TD_DINT LC_VD_DAY, LC_TD_DINT LC_VD_MONTH, LC_TD_DINT LC_VD_YEAR, struct _lcoplck_epdb_1_impl* pEPDB)
{
	  /* Vendor Code */
		char c_command[30] = "";
	    sprintf(c_command,"date %04d-%02d-%02d", LC_VD_YEAR, LC_VD_MONTH, LC_VD_DAY); system(c_command);
	    sprintf(c_command,"date -s %02d:%02d:%02d", LC_VD_HOUR, LC_VD_MIN, LC_VD_SEC); system(c_command);
}

#endif
