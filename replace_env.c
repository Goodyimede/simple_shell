#include "function.h"
#include "shelldata.h"
/**
 * subEnv - This function is used to replace env...
 * variable
 *
 * @mystrct: parameter
 * @envi_var: input environment vvariable
 *
 * Return: pointer
**/
char *subEnv(shelldata_t *mystrct, char *envi_var)
{
	char *en;

	(void) mystrct;

	en = getEnv(envi_var);
	if (en != NULL)
	{
		return (en);
	}

	return (NULL);
}
