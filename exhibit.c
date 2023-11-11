#include "function.h"
#include "shelldata.h"

/**
 * display - function prints a message to the standard output
 *
 * @message: Message to print to the stdout
 *
 * Return: Number of byte(s) printed
 *
 **/

int display(char *message)
{
	return (outputToFD(message, 1));
}
