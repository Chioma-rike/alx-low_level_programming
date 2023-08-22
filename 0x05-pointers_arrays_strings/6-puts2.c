#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * character of a string, starting with the first
 * character, followed by a new line.
 * @str: input
 * Return: lenght
 */
void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *v = str;
	int o;

	while (*v != '\0')
	{
		v++;
		len++;
	}
	x = len - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
