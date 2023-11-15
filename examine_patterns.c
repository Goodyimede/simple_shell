#include "function.h"
#include "shelldata.h"

/**
 * patternAnalysis - function collects a pattern and helps
 * to analyze such pattern
 *
 * @mystrct: input parameter
 * @args: argument to anaylze
 * Return: void
**/

void patternAnalysis(shelldata_t *mystrct, char **args)
{
	int k;

	for (k = 0; args[k] != NULL; k++)
	{
		args[k] = handle_pattern(mystrct, args[k]);
	}
}
