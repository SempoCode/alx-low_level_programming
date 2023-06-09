#include "main.h"
/**
 * _strlen_recursion - calculates the lengthof the strinf
 * @s: pointer to the the string to be counted
 * Return: returns the length of the  string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = n + 1;
		n = n + _strlen_recursion(s + 1);
	}
	return (n);
}
