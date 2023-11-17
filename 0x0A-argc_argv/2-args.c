#include <stdio.h>
/**
 * main - This prints all arguements it recives.
 * @argv: Array containing program command line arg
 * @argc: Number of command line
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
