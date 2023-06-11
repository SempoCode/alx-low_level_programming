#include <stdio.h>
/**
 * main - prints all arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
