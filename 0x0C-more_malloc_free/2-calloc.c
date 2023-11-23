#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements.
 * @size: The size of the element (int).
 *
 * Return: void pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ace;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ace = malloc(size * nmemb);
	if (ace == NULL)
		return (NULL);
	filler = ace;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (ace);
}
