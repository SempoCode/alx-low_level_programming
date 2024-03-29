#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: a string to duplicate
 * Return: a pointer to duplicated string on success and
 * a NULL if str is NULL and insufficient memory is available
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
		n = i;
	s = malloc(sizeof(char) * (n + 2));

	if (s == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
