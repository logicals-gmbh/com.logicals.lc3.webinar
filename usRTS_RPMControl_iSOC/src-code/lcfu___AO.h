#ifndef LC_PROT_LCFU___AO__H
#define LC_PROT_LCFU___AO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AO
{
  LC_TD_INT LC_VD_ANALOGVALUE;
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_AO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AO(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_ANALOGVALUE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AO(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_ANALOGVALUE),RF); \
}

/*                            Prototype                        */
void  lcfu___AO(LC_TD_FunctionBlock_AO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
