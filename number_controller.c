#include "function.h"
#include "shelldata.h"
/**
 * manageNumbers - This function will help solve the argument of exit builtin
 *
 * @mystrct: a pointer to a struct
 * @argument: Argument encounter
 *
 * Return: if argument exist return 1 else 0
 **/
int manageNumbers(shelldata_t *mystrct, char *argument)
{
	int trackers;

	trackers = _atoi(argument);

	if (trackers < 0 || hasLetter(argument))
	{
		mystrct->code_stat = 2;
		mystrct->error_digit = 133;
		additionalError(mystrct, argument);
		return (0);
	}

	if (trackers > 255)
	{
		mystrct->code_stat = trackers % 256;
	}
	else
	{
		mystrct->code_stat = trackers;
	}

	return (1);
}
