#include "function.h"
#include "shelldata.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, k;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}
	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	return (dest);
}
