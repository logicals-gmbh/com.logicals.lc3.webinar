#ifndef LC_PROT_LCFU___DQ__C
#define LC_PROT_LCFU___DQ__C

#include <lcfu___DQ.h>
#include <stdbool.h>

extern void vSetDigitalValue(uint16_t usNumInput, bool bValue);

/*                            FunctionBlocks                   */
void  lcfu___DQ(LC_TD_FunctionBlock_DQ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Vendor Code */
	vSetDigitalValue(LC_this->LC_VD_OUTPUTSELECT, LC_this->LC_VD_OUTPUTVALUE);
}

#endif
