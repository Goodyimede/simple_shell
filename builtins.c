#include "function.h"
#include "shelldata.h"
/**
 * systemFunction - function will help to
 * check for executable builtins
 *
 * @mystrct: struct with a datatype of information
 * about the shell
 * @args: the argument
 *
 * Return: 1 for buitin command 0 if not
 **/
int systemFunction(shelldata_t *mystrct, char **args)
{
	int updated;

	updated = verifyBuiltin(mystrct, args);
	if (updated == 0)
	{
		return (0);
	}

	return (1);
}
