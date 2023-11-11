#include "function.h"
#include "shelldata.h"
/**
 * verifyBuiltin - function helps confirm a builtin command
 *
 * @mystrct: struct with data type about the shell
 * @args: argument count
 *
 * Return: 1 for buitin and 0 if not
 **/
int verifyBuiltin(shelldata_t *mystrct, char **args)
{
	int k, mask;

	sysFunction_t builtins[] = {
		{"exit", binaryExit},
		{"env", binaryEnv}
	};

	mask = sizeof(builtins) / sizeof(builtins[0]);
	k = 0;
	while (k < mask)
	{
		if (_strcmp(mystrct->cmd, builtins[k].cmd) == 0)
		{
			builtins[k].func(mystrct, args);
			return (1);
		}
		k++;
	}

	return (0);
}
