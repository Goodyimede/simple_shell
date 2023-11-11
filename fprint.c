#include "function.h"
#include "shelldata.h"

/**
 * outputToFD - function that prints a string to file descriptor
 *
 * @message: string to be print
 * @fil_d: File descriptor to print to either 1, 2 or 0
 *
 * Return: numbers of bytes printed is returned
 **/

int outputToFD(char *message, int fil_d)
{
	int buffer;

	buffer = _strlen(message);
	return (write(fil_d, message, buffer));
}
