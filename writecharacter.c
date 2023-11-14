#include "shelldata.h"
#include "function.h"
/**
 * writeCharacter - Prints a char to a standard output
 *
 * @character: Character to passed to printed
 *
 * Return: On success return  1
 *
 **/
int writeCharacter(char character)
{
	return (write(1, &character, 1));
}
