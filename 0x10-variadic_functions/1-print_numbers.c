#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed to it
 * @separator: separates the numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list values;
	unsigned int i;

	va_start(values, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(values, int));
		if (i != (n - 1))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
}
