#include "main.h"
/**
 * islower - this function checks whether the input is lower case
 * @c: this is an parameter to check
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
