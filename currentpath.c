#include "function.h"
#include "shelldata.h"
/**
 * CurrentPath - function that checks how the path is beingarranged
 * @path: path checked
 * @mystrct: struct with specified data type
 * Return: no return
 **/
void CurrentPath(char *path, shelldata_t *mystrct)
{
	mystrct->cur_path = 0;

	if (path == NULL)
	{
		return;
	}

	if (path[0] == ':')
	{
		mystrct->cur_path = 1;
	}
}
