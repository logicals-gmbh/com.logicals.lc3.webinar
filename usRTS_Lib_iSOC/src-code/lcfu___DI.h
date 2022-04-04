#ifndef LC_PROT_LCFU___DI__H
#define LC_PROT_LCFU___DI__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DI
{
  LC_TD_INT LC_VD_INPUTSELECT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_INPUTVALUE;
} LCCG_StructAttrib LC_TD_FunctionBlock_DI;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DI(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_INPUTSELECT)); \
  LC_INIT_BOOL(&((p)->LC_VD_INPUTVALUE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DI(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_INPUTSELECT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_INPUTVALUE),RF); \
}

/*                            Prototype                        */
void  lcfu___DI(LC_TD_FunctionBlock_DI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
