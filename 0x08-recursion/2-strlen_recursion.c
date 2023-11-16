#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	int longii = 0;

	if (*s)
	{
		longii++;
		longii += _strlen_recursion(s + 1);
	}
	return (longii);
}
