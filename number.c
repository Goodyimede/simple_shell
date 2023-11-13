#include "function.h"
#include "shelldata.h"
/**
 * number - Counting the digits in a given no.
 *
 * @numb: The number
 *
 * Return: the number counted
 **/
int number(int numb)
{
	int a = 0;

	while (numb != 0)
	{
		a++;
		numb = numb / 10;
	}

	return (a);
}
