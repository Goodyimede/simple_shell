#include "function.h"
#include "shelldata.h"

/**
 * writeCharacterToFD - This function helps write
 * charcater to a specific file descriptor
 *
 * @chap: Character to print
 * @fil_d: specifiy file descriptor to be 0 1 or 2
 *
 * Return: On success 1.
 **/

int writeCharacterToFD(char chap, int fil_d)
{
	return (write(fil_d, &chap, 1));
}
