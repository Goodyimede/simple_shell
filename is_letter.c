#include "function.h"
#include "shelldata.h"
/**
 * hasLetter - function searches if a digit string has letter
 *
 * @string: input string
 *
 * Return: If a non-digit is found, return 1
 * if not, return 0
 **/
int hasLetter(char *string)
{
	int k;

	for (k = 0; string[k] != '\0'; k++)
	{
		if (Numeric(string[k]) == 0)
			return (1);
	}

	return (0);
}
