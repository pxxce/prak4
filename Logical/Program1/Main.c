
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	led1 = LED[0];
	led2 = LED[1];
	led3 = LED[2];
	led4 = LED[3];
}

void _EXIT ProgramExit(void)
{

}

