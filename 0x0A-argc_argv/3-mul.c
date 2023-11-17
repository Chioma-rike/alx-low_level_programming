#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argv: Array containing program command line arguments
 * @argc: Number of command line arguements
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
