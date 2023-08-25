#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use the variable a in your new line of code
 *   - You are not allowed to modify the variable p
 *   - You can only write one statement
 *   - You are not allowed to code anything else than the expected code
 *   - Your code should be written at line 19, before the ;
 */
	*(p + 5) = 98;
/* ...so that this prints 98\n */
	print("a[2] = %d\n". a[2]);
	return (0);
}
