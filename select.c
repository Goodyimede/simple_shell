#include "function.h"
#include "shelldata.h"
/**
 * select - function built to find directories when needed
 * @drtname: directory name input
 * @mystrct: struct that defines a certain data type
 * Return: pointer to a string
 */
char *select(char *drtname, shelldata_t *mystrct)
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

	mask = _strlen(drtname) + 2;
	del = malloc(mask * sizeof(char));
	del = _strcpy(del, "/");
	del = _strcat(del, drtname);

	while (tok != NULL)
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
