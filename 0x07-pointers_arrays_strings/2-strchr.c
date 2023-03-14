#include "main.h"
/**
 * _strchr - locates a character
 * @s: parameter
 * @c: parameter
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i, j, k;
	char p[100];

	for (i = 0; s[i] != '\0'; i++)
	{
		k = i;
	}
	for (i = 0; i < k; i++)
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
	}
	for (i = 0; i <= k - j; i++)
	{
		p[i] = s[i + j];
	}
	s = p;
	return (s);
}
