#include "shelldata.h"
#include "function.h"

/**
 * binaryEnv - function helps to implement
 * the builtin of the environment
 *
 * @mystrct: struct about the shell or data created
 * @args: arguments passed to the shell
 *
 * Return: nothing
 **/

void binaryEnv(shelldata_t *mystrct, char **args)
{
	(void) mystrct;
	(void) args;

	fetchFullEnv();
}
