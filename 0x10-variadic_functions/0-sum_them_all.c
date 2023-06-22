#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters of the function
 * @n: number of parameters
 * Return: sum on success or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		add += va_arg(list, int);
	return (add);
}
