#include "function.h"
#include "shelldata.h"
/**
 * releaseMemory - functn that helps to release a pointer
 *
 * @thepointer: Pointer to be freed
 * Return: void
 **/
void releaseMemory(void *thepointer)
{
	if (thepointer != NULL)
	{
		free(thepointer);
		thepointer = NULL;
	}
	thepointer = NULL;
}
