#include "main.h"
/**
 * prime_recursion - checks for prime number
 * @n: number to be checked
 * @i: the divisor
 * Return: 1 if prime and 0 otherwise
 */
int prime_recursion(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		if (i * i > n)
		{
			return (1);
		}
	}
	return (prime_recursion(n, i + 1));
}

/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_recursion(n, 2));
}
