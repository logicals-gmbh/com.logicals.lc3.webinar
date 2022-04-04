#ifndef LC_PROT_LCFU___AO__C
#define LC_PROT_LCFU___AO__C

#include <lcfu___AO.h>

extern void vSetAnalogValue(uint16_t usAnalogValue);

/*                            FunctionBlocks                   */
void  lcfu___AO(LC_TD_FunctionBlock_AO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	vSetAnalogValue(LC_this->LC_VD_ANALOGVALUE);
}

#endif
