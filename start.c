#include "function.h"
#include "shelldata.h"
/**
 * start - Handle the mode of the shell
 * Description: Mode can be 1 or 0
 *
 * @mystrct: Struct of information
 * about the shell
 *
 * Return: nothing
 **/
void start(shelldata_t *mystrct)
{
	initiatePrompt(mystrct);
}
