#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to concatenate to s2
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[l1] != '\0')
		l1 += 1;
	while (s2[l2] != '\0')
		l2 += 1;
	if (n >= l2)
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	else
		s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (n >= l2 && i < (l1 + l2))
	{
		s[i] = s2[j];
		i++, j++;
	}
	while (n < l2 && i < (l1 + n))
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
