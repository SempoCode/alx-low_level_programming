#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers in a variadic function
 * @separator: pointer to character that separates numbers
 * @n: number of parameters passed into the variadic function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s ", separator);
	i++;
	}
	va_end(list);
	printf("\n");
}
