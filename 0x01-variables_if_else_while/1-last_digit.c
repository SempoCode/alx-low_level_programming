#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define _GNU_SOURCRE
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this is the main function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%i", m);
		printf(" and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is ", n);
		printf("%i", m);
	       printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
