#include "shelldata.h"
#include "function.h"

/**
 * start - function that handles the mode of the shell
 * Description: Mode can be 1 or 0
 *
 * @mystrct: Struct of information
 * about the shell
 *
 * Return: nothing
 **/

void start(shelldata_t *mystrct)
{
	initpromt(mystrct);
}
