#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name
 * @name: pointer to the name  to be printed
 * @f: pointer to the function with the code
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
