#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONVERTx2EFUN_LC_STRFROMBYTEARR_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONVERTx2EFUN_LC_STRFROMBYTEARR_C__C

#include <lcfu___COM.LOGICALS.BASIC.CONVERT.FUN_LC_STRFROMBYTEARR_C.h>

/*                            Functions                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2ECONVERTx2EFUN_LC_STRFROMBYTEARR_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2ECONVERTx2EFUN_LC_STRFROMBYTEARR_C* LC_this, LC_TD_BYTE LC_VD_VIB_ARR[1024], LC_TD_DINT LC_VD_VIDI_LEN, struct _lcoplck_epdb_1_impl* pEPDB)
{
	int index;
	for (index = 0; index < LC_VD_VIDI_LEN; index++)
	{
		LC_this->LC_VD_FUN_LC_STRFROMBYTEARR_C[index] = LC_VD_VIB_ARR[index];
	}
}

#endif