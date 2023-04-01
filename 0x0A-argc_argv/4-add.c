#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 when successful
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int i;
	int num;
	int sum = 0;

	i = 1;
	while (i < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[i]))

		{
			/*ATOI --> convert string to int*/
			num = atoi(argv[i]);

			sum += num;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

