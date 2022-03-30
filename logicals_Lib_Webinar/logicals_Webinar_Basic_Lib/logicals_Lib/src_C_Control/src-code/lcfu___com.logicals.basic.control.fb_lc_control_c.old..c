#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C__C

#include <lcfu___com.logicals.basic.control.fb_lc_control_c.h>



/*                            FunctionBlocks                   */
void  lcfu___COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C(LC_TD_FunctionBlock_COMx2ELOGICALSx2EBASICx2ECONTROLx2EFB_LC_CONTROL_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	LC_TD_REAL TX;

	if (LC_this->LC_VD_TU > 0.0 && LC_this->LC_VD_KS > 0.0)
	{
		TX = LC_this->LC_VD_TG / LC_this->LC_VD_TU / LC_this->LC_VD_KS;
	}
	if (LC_this->LC_VD_PI && LC_this->LC_VD_PID)
	{
		LC_this->LC_VD_KP = 0.0;
		LC_this->LC_VD_TN = 0.0;
		LC_this->LC_VD_TV = 0.0;
	}
	else
	{
		if (LC_this->LC_VD_PID)
		{
			LC_this->LC_VD_KP = LC_this->LC_VD_PID_K * TX;
			LC_this->LC_VD_TN = LC_this->LC_VD_PID_TN * LC_this->LC_VD_TU;
			LC_this->LC_VD_TV = LC_this->LC_VD_PID_TV * LC_this->LC_VD_TU;
		}
		else
		{
			if (LC_this->LC_VD_PI)
			{
				LC_this->LC_VD_KP = LC_this->LC_VD_PI_K * TX;
				LC_this->LC_VD_TN = LC_this->LC_VD_PI_TN * LC_this->LC_VD_TU;
			}
			else
			{
				LC_this->LC_VD_KP = LC_this->LC_VD_P_K * TX;
			}
		}
	}

	/* KI and KD are calculated */
	if (LC_this->LC_VD_TN > 0.0)
	{
		LC_this->LC_VD_KI = LC_this->LC_VD_KP / LC_this->LC_VD_TN;
	}
	else
	{
		LC_this->LC_VD_KI = 0.0;
	}
	LC_this->LC_VD_KD = LC_this->LC_VD_KP * LC_this->LC_VD_TV;
}

#endif
