#include "main.h"
/**
 * is_sqrt - determines the natural square root of a number
 * @n: a number whose square root is to be determined
 * @i: the diviser
 * Return: returns the square root or -1  one for a number without square root
 */
int is_sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if (i * i > n)
		{
			return (-1);
		}
		else if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (is_sqrt(n, i + 1));
		}
	}
}

/**
 * _sqrt_recursion - initialises recursion
 * @n: a number whose square root is to be determined
 * Return: returns the square root or -1  one for a number without square root
 */
int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 2));
}
