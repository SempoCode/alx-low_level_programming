#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the results
 * @argc: number of arguments input
 * @argv: array of pointers to arguments
 * Return: 0 when sussessful
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	s = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
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
