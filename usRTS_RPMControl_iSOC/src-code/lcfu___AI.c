#ifndef LC_PROT_LCFU___AI__C
#define LC_PROT_LCFU___AI__C

#include <lcfu___AI.h>

extern uint16_t usGetAnalogValue(uint16_t usNumInput);

/*                            FunctionBlocks                   */
void  lcfu___AI(LC_TD_FunctionBlock_AI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	LC_this->LC_VD_ANALOGVALUE = usGetAnalogValue(LC_this->LC_VD_INPUTSELECT);
}

#endif
