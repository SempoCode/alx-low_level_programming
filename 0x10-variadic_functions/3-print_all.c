#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of all types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int j;
	char *s;
	char *separator = "";
	float f;
	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		j = 0;
		while (*(format + j))
		{
			switch (*(format + j))
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					f = va_arg(list, double);
					printf("%s%f", separator, f);
					break;
				case 's':
					s = va_arg(list, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					break;
			}
			separator = ", ";
			j++;
		}
	}
	va_end(list);
	printf("\n");
}
