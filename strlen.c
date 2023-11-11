#include "function.h"
#include "shelldata.h"

/**
 * _strlen - function that returns the length of string
 *
 * @s: input string
 *
 * Return: (0)
 */

int _strlen(char *s)
{
	int sum_len;

	sum_len = 0;
	while (s[sum_len] != '\0')
	{
	sum_len++;
	}

	return (sum_len);
}
