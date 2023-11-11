#include "function.h"
#include "shelldata.h"
/**
 * additionalError - function prints the error
 * message with extra/more information about the error
 *
 * @mystrct: struct that gives info about the shell
 * also declares a type for this information
 * @more: The extra information about the
 * the error message
 *
 * Return: nothing
 **/
void additionalError(shelldata_t *mystrct, char *more)
{
	char *msg, *num;
	char *ag, *ag2;
	int num_size, msg_size;
	int more_size;

	num = NULL;
	msg = selectMessage(*mystrct);
	num = stringify(mystrct->n_cmd);

	num_size = _strlen(num);
	msg_size = _strlen(mystrct->argv[0]);
	more_size = _strlen(more);

	ag = malloc(msg_size + num_size + 3);
	ag = _strcpy(au, mystrct->argv[0]);
	ag = _strcat(au, ": ");
	ag = _strcat(au, num);

	ag2 = malloc(_strlen(msg) + more_size + 3);
	ag2 = _strcpy(ag2, msg);
	ag2 = _strcat(ag2, ": ");
	ag2 = _strcat(ag2, more);

	msg = mergeWords(ag, mystrct->cmd, ag2, ": ");
	displayError(msg);

	free(msg);
	free(num);
	free(ag);
	free(ag2);
}
