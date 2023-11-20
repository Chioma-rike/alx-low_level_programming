#include "main.h"
#include <stdlib.h>


/**
 * create_array - Creates an array of characters and
 * intializes it with a specific character.
 * @c: The specific character to initialize the array with.
 * @size: The array size to bee initialized.
 * Return: A pointer to be the array.
 */
char *create_array(unsigned int size, char c)
{
	char *chi;
	unsigned int index;

	chi = malloc(sizeof(char) * size);
	if (size == 0 || chi == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		chi[index] = c;
	}
	return (chi);
}
