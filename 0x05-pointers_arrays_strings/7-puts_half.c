#include "main.h"
/**
 * puts_half - This prints the second half of the string
 * @str: This is the pointer to the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int length;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length = i;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
		for (i = n ; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n + 1 ; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
