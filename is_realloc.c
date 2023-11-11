#include "function.h"
#include "shelldata.h"
/**
 * _realloc - function that reallocates memory
 * @ptr: pointer to the old memory allocated
 * @old_size: former size of the memory
 * @new_size: new size to the allocated memory
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int k, msk = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		msk = old_size;
	for (k = 0; k < msk; k++)
		p[k] = oldp[k];
	free(ptr);
	return (p);
}
