#include "main.h"
/**
 * _print_rev_recursion - function to reverse the string
 * @s: pointer to the  string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
