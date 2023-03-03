#include "main.h"
/**
 * reverse_array - function that reverse an arrat of integers
 * @a: parameter
 * @n: parameter
 * Return: 0 when successfull
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
