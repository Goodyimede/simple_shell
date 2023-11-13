#include "function.h"
#include "shelldata.h"
/**
 * stringify - fuction converts a nunber to a string
 *
 * @numbe: Number to convert
 *
 * Return: Number converted
 **/
char *stringify(int numbe)
{
	char *numb;
	int total_digits, a;

	total_digits = number(numbe);
	numb = malloc(total_digits * sizeof(char) + 1);
	if (numb == NULL)
		return (NULL);
	if (numbe == 0)
	{
		numb[0] = '0';
		numb[1] = '\0';
		return (numb);
	}

	numb[total_digits] = '\0';

	for (a = total_digits - 1; numbe != 0; numbe /= 10, a--)
	{
		numb[a] = (numbe % 10) + '0';
	}

	return (numb);
}
