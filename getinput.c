#include "function.h"
#include "shelldata.h"

/**
 * getInput - This function serves as the prompt
 * for this simple shell program
 *
 * @mystrct: Structure of general information which
 * has been defined in a header file
 **/

void getInput(shelldata_t *mystrct)
{
	if (mystrct->it_mode == 0)
	{
		return;
	}

	display("$ ");
}
