#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
		_putchar('0');
}
