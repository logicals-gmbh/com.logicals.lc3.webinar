#ifndef LC_PROT_LCFU___DI__C
#define LC_PROT_LCFU___DI__C

#include <lcfu___DI.h>
#include <stdbool.h>

extern bool bGetDigitalValue(uint16_t usNumInput);

/*                            FunctionBlocks                   */
void  lcfu___DI(LC_TD_FunctionBlock_DI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	LC_this->LC_VD_INPUTVALUE = bGetDigitalValue(LC_this->LC_VD_INPUTSELECT);
}

#endif
