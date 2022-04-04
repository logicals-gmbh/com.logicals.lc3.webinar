#ifndef LC_PROT_LCFU___AI__H
#define LC_PROT_LCFU___AI__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AI
{
  LC_TD_INT LC_VD_INPUTSELECT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_INT LC_VD_ANALOGVALUE;
} LCCG_StructAttrib LC_TD_FunctionBlock_AI;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AI(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_INPUTSELECT)); \
  LC_INIT_INT(&((p)->LC_VD_ANALOGVALUE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AI(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_INPUTSELECT),RF); \
  LC_WINIT_INT(&((p)->LC_VD_ANALOGVALUE),RF); \
}

/*                            Prototype                        */
void  lcfu___AI(LC_TD_FunctionBlock_AI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
