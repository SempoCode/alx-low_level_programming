#include "main.h"
/**
 * rev_string - This prints the second half of the string
 * @str: This is the pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	char *start, *end, temp;

	for (i = 0; s[i] != '\0'; i++)
        {
                length = i;
        }

	start = s;
	end = s;

	for (i = 0; i <length; i++)
	{
		end++;
	}
	
	for (i = 0; i < length / 2; i ++)
	{	
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
