#include "function.h"
#include "shelldata.h"
/**
 * _atoi - function that converts a string to an integer.
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int sum = 0, size = 0, j = 0, pk = 1, n = 1, i;

	while (*(s + sum) != '\0')
	{
		if (size > 0 && (*(s + sum) < '0' || *(s + sum) > '9'))
			break;

		if (*(s + sum) == '-')
			pk *= -1;

		if ((*(s + sum) >= '0') && (*(s + sum) <= '9'))
		{
			if (size > 0)
				n *= 10;
			size++;
		}
		sum++;
	}

	for (i = sum - size; i < sum; i++)
	{
		j = j + ((*(s + i) - 48) * n);
		n /= 10;
	}
	return (j * pk);
}
