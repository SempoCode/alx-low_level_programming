#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: name of the person
 * @f: prints name is
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
