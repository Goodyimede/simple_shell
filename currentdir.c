#include "function.h"
#include "shelldata.h"

/**
 * getCurrentDir - This function will help execute a command
 *
 * @command: Command to execute is passed here
 * @argu: Argument passed with the command is passed here
 * @buff: the buffer received
 * @mystrct: a struct that contains general information
 * about the shell
 *
 * Return: a number which equate the status of the program
 **/

int getCurrentDir(char *command, char **argu, char *buff, shelldata_t *mystrct)
{

	if (mystrct->cur_path == 0)
	{
		return (0);
	}

	if (Executable(command) == 1)
	{
		run(command, argu, mystrct, buff);
		return (1);
	}

	return (0);
}
