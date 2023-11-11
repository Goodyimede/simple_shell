#include "function.h"
#include "shelldata.h"
/**
 * _strdup - function that copies a string
 *
 * @str: String to copy
 *
 * Return: A character pointer to the newly allocated string
 * in memory
 **/
char *_strdup(char *str)
{
	char *dest;
	int str_sum, k;

	if (str == NULL)
	{
		return (NULL);
	}

	str_sum = _strlen(str) + 1;
	dest = malloc(str_sum * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < str_sum; k++)
	{
		dest[k] = str[k];
	}

	return (dest);
}
