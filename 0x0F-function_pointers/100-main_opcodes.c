#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return:  0 when Success
 */
int main(int argc, char *argv[])
{
	int no_bytes, i;
	char *s;

	no_bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (no_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;
	i = 0;
	while (i < no_bytes)
	{
		if (i == no_bytes - 1)
		{
			printf("%02hhx\n", s[i]);
			break;
		}
		printf("%02hhx ", s[i]);
		i++;
	}
	return (0);
}
