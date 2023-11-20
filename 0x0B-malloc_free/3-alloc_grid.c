#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: A pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **anaC;
	int ace_index, wid_index;

	anaC = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || anaC == NULL)
	{
		return (NULL);
	}

	for (ace_index = 0; ace_index < height; ace_index++)
	{
		anaC[ace_index] = malloc(sizeof(int) * width);
		if (anaC[ace_index] == NULL)
		{
			for (; ace_index >= 0; ace_index--)
			{
				free(anaC[ace_index]);
			}
			free(anaC);
			return (NULL);
		}
	}
	for (ace_index = 0; ace_index < height; ace_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
		{
			anaC[ace_index][wid_index] = 0;
		}
	}
	return (anaC);
}
