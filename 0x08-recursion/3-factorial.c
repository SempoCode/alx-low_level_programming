#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: the number who factorial is to be calculated
 * Return: an integer greater than zero on success, -1 on error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
