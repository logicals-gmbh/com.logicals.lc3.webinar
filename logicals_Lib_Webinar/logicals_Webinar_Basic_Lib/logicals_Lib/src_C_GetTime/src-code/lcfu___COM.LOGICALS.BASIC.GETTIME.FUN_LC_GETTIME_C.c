#ifndef LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EGETTIMEx2EFUN_LC_GETTIME_C__C
#define LC_PROT_LCFU___COMx2ELOGICALSx2EBASICx2EGETTIMEx2EFUN_LC_GETTIME_C__C

#if !defined(_POSIX_C_SOURCE)
#define _POSIX_C_SOURCE 200809L
#endif /* _POSIX_C_SOURCE */
#include <time.h>

#include <lcfu___COM.LOGICALS.BASIC.GETTIME.FUN_LC_GETTIME_C.h>

/*                            Functions                        */
void  lcfu___COMx2ELOGICALSx2EBASICx2EGETTIMEx2EFUN_LC_GETTIME_C(LC_TD_Function_COMx2ELOGICALSx2EBASICx2EGETTIMEx2EFUN_LC_GETTIME_C* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	#if defined(__LINUX__)
		struct tm result;
		time_t curTime;

		time(&curTime);
		localtime_r(&curTime, &result);

		LC_this->LC_VD_SEC = result.tm_sec;
		LC_this->LC_VD_MIN = result.tm_min;
		LC_this->LC_VD_HOUR = result.tm_hour;
		LC_this->LC_VD_MDAY = result.tm_mday;
		LC_this->LC_VD_MON = result.tm_mon+1;
		LC_this->LC_VD_YEAR = 1900 + result.tm_year;
		LC_this->LC_VD_WDAY = result.tm_wday;
		LC_this->LC_VD_YDAY = result.tm_yday;
		LC_this->LC_VD_ISDST = result.tm_isdst;
	#else
	#if defined(__WINDOWS__)
		struct tm *result;
		time_t curTime;

		time(&curTime);
		result = localtime(&curTime);

		LC_this->LC_VD_SEC = result->tm_sec;
		LC_this->LC_VD_MIN = result->tm_min;
		LC_this->LC_VD_HOUR = result->tm_hour;
		LC_this->LC_VD_MDAY = result->tm_mday;
		LC_this->LC_VD_MON = result->tm_mon+1;
		LC_this->LC_VD_YEAR = 1900 + result->tm_year;
		LC_this->LC_VD_WDAY = result->tm_wday;
		LC_this->LC_VD_YDAY = result->tm_yday;
		LC_this->LC_VD_ISDST = result->tm_isdst;
	#else
		LC_this->LC_VD_ENO = LC_EL_false;
	#endif
	#endif
}

#endif
