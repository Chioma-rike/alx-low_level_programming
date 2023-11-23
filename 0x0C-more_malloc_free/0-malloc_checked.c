#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Input integer.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ace = malloc(b);

	if (ace == NULL)
	{
		exit(98);
	}

	return (ace);
}
