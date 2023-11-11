#include "function.h"
#include "shelldata.h"

/**
 * *_strcpy - pointer to a character
 *
 * @dest: input string 1
 * @src: input string 2
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
