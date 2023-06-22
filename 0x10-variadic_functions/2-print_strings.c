#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints the strings in the variadic function
 * @separator: pointer to the character separating the strings
 * @n: the number of strings in the function
 * @...: the other strings entered
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *k;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(list, char *);
		if (k == NULL)
			printf("nil");
		else
			printf("%s", k);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
