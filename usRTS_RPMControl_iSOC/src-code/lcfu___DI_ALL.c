#ifndef LC_PROT_LCFU___DI_ALL__C
#define LC_PROT_LCFU___DI_ALL__C

#include <lcfu___DI_ALL.h>

extern uint16_t usGetDigitalPort(void);

/*                            FunctionBlocks                   */
void  lcfu___DI_ALL(LC_TD_FunctionBlock_DI_ALL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	LC_this->LC_VD_ALLINPUTS = usGetDigitalPort();
}

#endif
