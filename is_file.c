#include "function.h"
#include "shelldata.h"
/**
 * File - This function checks if a paticular name
 * is a file or binary
 *
 * @fname: File to check if it has permission to be executable
 *
 * Return: yes return if it has the permission
 **/
int File(char *fname)
{
	int i, imo;

	imo = _strlen(fname);
	for (i = 0; i < imo; i++)
		if (fname[i] == '/')
		{
			return (Executable(fname));
		}

	return (-10);
}
