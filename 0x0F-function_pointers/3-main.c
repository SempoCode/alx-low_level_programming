#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * main - erforms simple operations
 * @argc: number of commandline arguments
 * @argv: array of pointers to the commandline arguements
 * Return: integer on success and an Error with exit status on failure
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *s;

	s = argv[2];
	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}
	if (s[1] != '\0' || get_op_func(s) == NULL)
	{
		printf("Error2\n");
		exit(99);
	}
	if ((num2 == 0 && *s == '/') || (num2 == 0 && *s == '%')) 
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(s)(num1, num2));
	return (0);
}
