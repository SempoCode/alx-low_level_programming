#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function to print a string.
 * @s: function argument (pointer)
 */
void _puts_recursion(char *s)
{
	int i, n;

	for (i = 0; *(s + i) != '\0'; i++)
		n = i;
	for (i = 0; i <= n; i++)
		_putchar(s[i]);
	_putchar('\n');
}
