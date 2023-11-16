#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: The numbers which square root is calculated
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recurses to find the natural
 * square root of a number
 * @n: Number to calculate the square root
 * @j: iterator
 *
 * Return: The resulting square root
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
