#include "function.h"
#include "shelldata.h"
/**
 * parse_prompt - function that uses the getline to read line of prompt
 *
 * Description: by pressing cntrl C it tiggers end of file
 *
 * Return: Buffer readed or 0
 **/
char *parse_prompt(void)
{
	char *buff = NULL;
	int rett;
	size_t size;

	rett = getline(&buff, &size, stdin);

	if (rett == EOF)
	{
		releaseMemory((void *) buff);
		return (NULL);
	}

	return (buff);
}
