#include<stdio.h>
/**
 * main - this the maim function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
