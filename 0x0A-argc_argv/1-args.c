#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointer to arguments
 * Return: 0 when successful
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
