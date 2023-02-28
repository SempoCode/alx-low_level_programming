#include "main.h"
/**
 * puts2 - This prints the first half  the string
 * @str: This is the pointer to the string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if(str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
