#include <stdio.h>
/**
 * main - Printsd the number of arguments passed into it
 * @argv: Array containing program command line arg
 * @argc: Number of command line
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
