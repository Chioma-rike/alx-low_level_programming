#include <stdio.h>
/**
 * main - Following a new line, prints its name.
 * @argv: Arrary containing command line arguements.
 * @argc: Number of command line arguements.
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
