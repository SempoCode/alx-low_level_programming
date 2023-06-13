#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: poniter to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, n1, n2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		n1 = i;
	for (i = 0; s2[i] != '\0'; i++)
		n2 = i;

	s = malloc(sizeof(char) * (n1 + n2 + 3));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (i = 0; s2[i]; i++)
		s[i + n1] = s2[i];
	return (s);
	free(s);
}
