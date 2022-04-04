#include <callback_functions.h>

void CLB_systemStartUp(void)
{
  /* place your implementation here */
}

void CLB_applicationExecutionStateIsChanged(CMN_State aExecutionState)
{
  (void)aExecutionState;
  /* place your implementation here */
}

void CLB_fatalErrorHandler(CLB_FatalErrorState aFatalErrorState)
{
  (void)aFatalErrorState;
  /* place your implementation here */
}

