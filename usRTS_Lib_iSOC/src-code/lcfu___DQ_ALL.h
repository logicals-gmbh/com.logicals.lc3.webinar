#ifndef LC_PROT_LCFU___DQ_ALL__H
#define LC_PROT_LCFU___DQ_ALL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DQ_ALL
{
  LC_TD_WORD LC_VD_ALLOUTPUTS;
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_DQ_ALL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DQ_ALL(p) \
{ \
  LC_INIT_WORD(&((p)->LC_VD_ALLOUTPUTS)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DQ_ALL(p,RF) \
{ \
  LC_WINIT_WORD(&((p)->LC_VD_ALLOUTPUTS),RF); \
}

/*                            Prototype                        */
void  lcfu___DQ_ALL(LC_TD_FunctionBlock_DQ_ALL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
