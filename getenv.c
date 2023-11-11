#include "function.h"
#include "shelldata.h"
/**
 * getEnv - function helps get an environment variable
 *
 * @variable: the environment variable
 *
 * Return: If success print var, else NULL
 **/
char *getEnv(const char *variable)
{
	char **enviro, *agx, *tk, *mart;
	int size;

	size = _strlen((char *) variable);

	for (enviro = environ; *enviro; ++enviro)
	{
		agx = _strdup(*enviro);

		tk = strtok(agx, "=");
		if (tk == NULL)
		{
			free(agx);
			return (NULL);
		}

		if (_strlen(tk) != size)
		{
			free(agx);
			continue;
		}
		if (_strcmp((char *) variable, agx) == 0)
		{
			tk = strtok(NULL, "=");
			mart = _strdup(tk);
			free(agx);
			return (mart);
		}
		free(agx);
	}
	return (NULL);
}
