#include "main.h"

int check_pal(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - This checks if a string is a palindrome
 * @s: The string to reverse
 *
 * Return: 1 if it is, else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of string
 * @s: String to calculate the length
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - Checks the characters recursivly for palindrome
 * @s: String to check
 * @j: iterator
 * @len: Length of the string
 *
 * Return: 1 if paliindrome,else 0
 */
int check_pal(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (check_pal(s, j + 1, len - 1));
}
