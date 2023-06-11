#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * check_arg - checks if string is a digit
 * @s: pointer to the string
 * Return: 0 on success
 */
int check_arg(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}

	}
	return (1);
}

/**
 * main - Adds positive arguments
 * @argc: number of arguments
 * @argv: Array of pointers to arguments
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_arg(argv[i]))
		{
			num = atoi(argv[i]);

			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
