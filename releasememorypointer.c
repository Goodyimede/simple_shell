#include "function.h"
#include "shelldata.h"
/**
 * releaseMemoryPointer - This function helps to
 * Free a double pointer which is a pointer to a pointer
 *
 * Description: just free the pointers of  pointers
 *
 * @pointer: the pointer to a pointer
 * Return: nothing
 **/
void releaseMemoryPointer(void **pointer)
{
	void **memory;

	for (memory = pointer; *memory != NULL; memory++)
	{
		releaseMemory(*memory);
	}

	releaseMemory(pointer);
}
