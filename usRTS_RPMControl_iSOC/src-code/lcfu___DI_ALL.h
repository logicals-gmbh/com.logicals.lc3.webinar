#ifndef LC_PROT_LCFU___DI_ALL__H
#define LC_PROT_LCFU___DI_ALL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DI_ALL
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_WORD LC_VD_ALLINPUTS;
} LCCG_StructAttrib LC_TD_FunctionBlock_DI_ALL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DI_ALL(p) \
{ \
  LC_INIT_WORD(&((p)->LC_VD_ALLINPUTS)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DI_ALL(p,RF) \
{ \
  LC_WINIT_WORD(&((p)->LC_VD_ALLINPUTS),RF); \
}

/*                            Prototype                        */
void  lcfu___DI_ALL(LC_TD_FunctionBlock_DI_ALL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
