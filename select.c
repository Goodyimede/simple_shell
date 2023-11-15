#include "function.h"
#include "shelldata.h"
/**
 * choose - function built to find directories when needed
 * @dirname: directory name input
 * @mystrct: struct that defines a certain data type
 * Return: pointer to a string
 */
char *choose(char *dirname, shelldata_t *mystrct)
{
	char *path, *path_temp, *tk, *del;
	int mask;

	(void) mystrct;

	path = getEnv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}

	tk = strtok(path, ":");

	mask = _strlen(dirname) + 2;
	del = malloc(mask * sizeof(char));
	del = _strcpy(del, "/");
	del = _strcat(del, dirname);

	while (tk != NULL)
	{
		path_temp = malloc(_strlen(tk) + mask);
		path_temp = _strcpy(path_temp, tk);
		path_temp = _strcat(path_temp, del);

		if (Executable(path_temp) == 1)
		{
			free(path);
			free(del);
			return (path_temp);
		}
		tk = strtok(NULL, ":");

		free(path_temp);
	}

	free(del);
	free(path);

	return (NULL);
}
