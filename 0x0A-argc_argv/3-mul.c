#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two entered numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success and  1 when Error
 */
int main(int argc, char *argv[])
{
	int n1, n2, ptd;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ptd = n1 * n2;

	printf("%d\n", ptd);
	return (0);
}
