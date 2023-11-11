#include "function.h"
#include "shelldata.h"

/**
 * displayError - This function helps to print to the
 * standard error
 * @message: Message to print parameter
 *
 * Return: Number of bytes printed by the function
 **/

int displayError(char *message)
{
	return (outputToFD(message, 2));
}
