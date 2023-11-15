#include "function.h"
#include "shelldata.h"
/**
 * evaluate - function that runs analysis,
 * on args passed to the prompt
 *
 * @args: argument to check for
 * @mystrct: struct created of a certain data type
 * @buffer: accepted line
 *
 * Return: nothing
 **/
void evaluate(char **args, shelldata_t *mystrct, char *buffer)
{
	char *cmd;
	int update;

	if (*args == NULL || args == NULL)
	{
		return;
	}
	cmd = args[0];
	mystrct->cmd = cmd;
	if (verifyBuiltin(mystrct, args) == 1)
	{
		return;
	}
	update = File(cmd);
	if (update == 0)
	{
		mystrct->code_stat = 126;
		mystrct->error_digit = 13;
		issue(mystrct);
		return;
	}
	if (update == 1)
	{
		run(cmd, args, mystrct, buffer);
		return;
	}
	if (getCurrentDir(cmd, args, buffer, mystrct) == 1)
		return;
	mystrct->cmd_path = choose(cmd, mystrct);
	if (mystrct->cmd_path != NULL)
	{
		run(mystrct->cmd_path, args, mystrct, buffer);
		releaseMemory((void *) mystrct->cmd_path);
		return;
	}
	mystrct->code_stat = 127;
	mystrct->error_digit = 132;
	issue(mystrct);
}
