#include "function.h"
#include "shelldata.h"
/**
 * subtituteValue - Functn that replaces a pattern value
 *
 * @mystrct: a struct param
 * @id: this handles the position
 * @str: string
 *
 * Return: a pointer to a bunch
**/
char *subtituteValue(shelldata_t *mystrct, int *id, char *str)
{
	char *par;
	int i, old_strr, new_strr;

	i = *id;
	i++;

	param = exchange(mystrct, id, str + i);
	if (par == NULL)
	{
		str = _strcpy(str, "");

		return (str);
		;
	}

	old_strr = _strlen(str);
	new_strr = _strlen(par) + 1;
	str = _realloc(str, old_strr, new_strr);
	str = _strcpy(str, par);

	releaseMemory(par);
	*id = i;

	return (str);
}
