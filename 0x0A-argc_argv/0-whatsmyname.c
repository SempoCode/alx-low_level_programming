#include "main.h"
#include <stdio.h>
/**
 * main - function printing own name
 * @argv: array of the arguments
 * @argc: number of the arguments
 * Return: 0 when successful
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s.\n", *argv);
	return (0);
}
