#ifndef LC_PROT_LCFU___DQ_ALL__C
#define LC_PROT_LCFU___DQ_ALL__C

#include <lcfu___DQ_ALL.h>

extern void vSetDigitalPort(uint16_t usValue);

/*                            FunctionBlocks                   */
void  lcfu___DQ_ALL(LC_TD_FunctionBlock_DQ_ALL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	vSetDigitalPort(LC_this->LC_VD_ALLOUTPUTS);
}

#endif
