#include "function.h"
#include "shelldata.h"
/**
 * Executable - function checks if a file is
 * executable
 *
 * @filename: The name of the file to be checked
 * Return: On success return 1
 * On error -1 is returned showing it has no permission
 **/
int Executable(char *filename)
{
	struct stat stats;

	if (stat(filename, &stats) == 0)
	{
		if (stats.st_mode & X_OK)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	return (-10);
}
