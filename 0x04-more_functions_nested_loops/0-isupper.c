#include "main.h"
/**
 * _isupper - this function checks for uppercase character
 * @c: the is the character to check
 * Return: always
 */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
