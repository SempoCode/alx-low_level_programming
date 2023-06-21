#include "3-calc.h"
#include <stdio.h>
#include "function_pointers.h"
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (*s != *(ops[i].op) && ops[i].op != NULL)
	{
		i++;
	}
	return (ops[i].f);
}
