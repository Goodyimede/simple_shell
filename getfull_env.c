#include "function.h"
#include "shelldata.h"

/**
 * fetchFullEnv - This function helps get all
 * the environment variable
 *
 * Return: nothing
 *
 **/

void fetchFullEnv(void)
{
	int k = 0;
	char **temp;

	for (k = 0, temp = environ; temp[k] != NULL; k++)
	{
		display(temp[k]);
		writeCharacter('\n');
	}
}
