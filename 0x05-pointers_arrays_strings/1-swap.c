#include "main.h"
/**
 * swap_int - this is a function that swaps values of two variables
 * @a: This the first pointer
 * @b: this is the second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
