#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory in the heap
 * @ace: Former pointer to the old memory allocated
 * by malloc.
 * @new_size: New size allocated by the _realloc function
 * @old_size: Old size allocated by the malloc in the heap
 * Return: Pointer to the newly allocated memory
 */
void *_realloc(void *ace, unsigned int old_size, unsigned int new_size)
{
	char *a;
	size_t i, max = new_size;
	char *olda = ace;

	if (ace == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ace);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ace);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = olda[i];
	free(ace);
	return (a);
}

