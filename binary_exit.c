#include "function.h"
#include "shelldata.h"
/**
 * binaryExit - function helps exit the shell
 * Description: much memories were used in the program,
 * this is to free them and then exit
 *
 * @mystrct: struct parameter
 * @args: argument passed to it
 *
 * Return: void
 *
 **/
void binaryExit(shelldata_t *mystrct, char **args)
{
	int status, status_dats;

	status = 1;
	if (args[1] != NULL)
	{
		status = manageNumbers(mystrct, args[1]);
	}

	if (status == 0)
	{
		return;
	}

	status_dats = mystrct->code_stat;

	releaseMemoryPointer((void **) args);
	releaseMemory((void *) mystrct->buf);
	releaseMemory((void *) mystrct->env);
	releaseMemory((void *) mystrct);

	exit(status_dats);
}
