#include "shelldata.h"
#include "function.h"
/**
 * main - This is  simple shell main program
 * Description: it runs the simple shell basic program
 *
 * @acc: the argument count
 * @avv: the arguments vector
 *
 * Return: return on success to (0)
 **/
int main(int acc, char **avv)
{
	int status;
	shelldata_t *mystrct;

	mystrct = malloc(sizeof(shelldata_t));
	if (mystrct == NULL)
	{
		perror(avv[0]);
		exit(1);
	}

	mystrct->pid = getpid();
	mystrct->code_stat = 0;
	mystrct->n_cmd = 0;
	mystrct->argc = acc;
	mystrct->argv = avv;
	mystrct->it_mode = isatty(0) == 1;
	start(mystrct);

	status = mystrct->code_stat;

	free(mystrct);

	return (status);
}
