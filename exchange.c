#include "function.h"
#include "shelldata.h"
/**
 * exchange - function used to replace
 *
 * @mystrct: a structure
 * @id: index parameter
 * @word: input parameter
 *
 * Return: pointer to a string
**/
char *exchange(shelldata_t *mystrct, int *id, char *word)
{
	char *temp, wave;

	(void) id;

	wave = *word;
	if (wave != '?' && wave != '$')
	{
		temp = subEnv(mystrct, word);
		return (temp);
	}

	temp = (wave == '$') ? stringify(mystrct->pid) :
		stringify(mystrct->code_stat);

	return (temp);
}
