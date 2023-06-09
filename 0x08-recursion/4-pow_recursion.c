#include "main.h"
/**
 * _pow_recursion - function to power a given number with another number
 * @x: a number to be powered
 * @y: a number used to power another number
 * Return: returns a positive value on success and negative on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
}
