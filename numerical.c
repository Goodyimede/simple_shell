#include "function.h"
#include "shelldata.h"
/**
 * Numeric - Checking for numeric digits
 *
 * @numb: Number needed to checked
 *
 * Return: 1 to be returnrd if it is, if not 0
 *
 */
int Numeric(unsigned int numb)
{
	return (numb >= '0' && numb <= '9');
}
