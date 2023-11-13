#include "function.h"
#include "shelldata.h"
/**
 * handle_pattern - This functio serves as helper function
 * @mystrct: a struct parameter
 * @words: serves as pointer to a string
 * Return: a pointer to a string
**/
char *handle_pattern(shelldata_t *mystrct, char *words)
{
	int a;

	for (a = 0; words[a] != '\0'; a++)
	{
		if (words[a] == '$' && words[a + 1] != '\0')
		{
			words = subtituteValue(mystrct, &a, words);
		}
	}

	return (words);
}

