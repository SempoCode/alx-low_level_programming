#include "lists.h"

/**
 * ft - prints before main is executed
 * Return: nothing
 */
void ft(void)__attribute__((constructor));
void ft(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
