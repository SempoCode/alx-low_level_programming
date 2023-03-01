#include "main.h"
/**
 * print_rev - prints the reversed order of a string
 * @s: this is the pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int leng;
	char *begin, *end, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		leng = i;
	}

	begin = s;
	end = s;

	for (i = 0; i < leng; i++)
	{
		end++;
	}
	for (i = 0; i < leng / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
	}

	for (i = 0; i < leng; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
