#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print name using pointer to function
 * @name: The string name
 * @f: Variable that hold the string name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
