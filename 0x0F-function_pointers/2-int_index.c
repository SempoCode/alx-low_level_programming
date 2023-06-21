#include <stdbool.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array of integers
 * @size: size of the array
 * @cmp: pointer to function doing the comparison
 * Return: integer(-1 if  no element matches and if size <= 0, then
 * an index of first integer that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
