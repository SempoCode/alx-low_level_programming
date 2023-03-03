#include "main.h"
/**
 * *cap_string - function to change to uppercase
 * @s: paramer
 * Return: character
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i - 1] == ' ' ||
		s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '?' ||
		s[i - 1] == '!' ||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}' ||
		s[i - 1] == ',' ||
		s[i - 1] == '"' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		i == 0)
			s[i] -= 32;
		i++;

	}
	return (s);
}
