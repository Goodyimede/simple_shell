#include "function.h"
#include "shelldata.h"
/**
 * run - This function helps to execute in child process
 *
 * @cmd: Commmand to execute
 * @argu: Arguments passed to the commnd
 * @mystrct: a struct
 * @buffer: Line readed or created
 *
 * Return: nothing..
 **/
void run(char *cmd, char **argu, shelldata_t *mystrct, char *buffer)
{
	int execute;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(cmd, argu, environ);
		perror("./sh");

		releaseMemoryPointer((void *) argu);

		if (mystrct->cmd_path != NULL)
		{
			free(mystrct->cmd_path);
			mystrct->cmd_path = NULL;
		}

		free(mystrct);
		free(buffer);
		exit(1);
	}
	else if (pid > 0)
	{
		waitpid(pid, &execute, 0);
		if (WIFEXITED(execute))
		{
			mystrct->code_stat = WEXITSTATUS(execute);
		}
	}
}
