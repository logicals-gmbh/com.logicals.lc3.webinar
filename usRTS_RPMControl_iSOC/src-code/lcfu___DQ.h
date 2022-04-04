#ifndef LC_PROT_LCFU___DQ__H
#define LC_PROT_LCFU___DQ__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DQ
{
  LC_TD_INT LC_VD_OUTPUTSELECT;
  LC_TD_BOOL LC_VD_OUTPUTVALUE;
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_DQ;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DQ(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_OUTPUTSELECT)); \
  LC_INIT_BOOL(&((p)->LC_VD_OUTPUTVALUE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DQ(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_OUTPUTSELECT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OUTPUTVALUE),RF); \
}

/*                            Prototype                        */
void  lcfu___DQ(LC_TD_FunctionBlock_DQ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
