#include "function.h"
#include "shelldata.h"
/**
 * issue - This function prints and handles error
 * @mystrct: a struct called info
 *
 * Return: nothing
 **/
void issue(shelldata_t *mystrct)
{
	char *ok, *numb, *ao;
	int numb_size, ok_size;

	numb = NULL;
	ok = selectMessage(*mystrct);
	numb = stringify(mystrct->n_cmd);

	numb_size = _strlen(numb);
	ok_size = _strlen(mystrct->argv[0]);

	ao = malloc(ok_size + numb_size + 3);

	ao = _strcpy(ao, mystrct->argv[0]);
	ao = _strcat(ao, ": ");
	ao = _strcat(ao, numb);

	ok = mergeWords(ao, mystrct->cmd, ok, ": ");
	displayError(ok);

	free(ok);
	free(numb);
	free(ao);
}
