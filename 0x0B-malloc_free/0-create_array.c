#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of specified size and
 * initializes it with a given character
 * @size: size of the array
 * @c: the char to initialize
 *
 * Return: pointer to the array on success and a Null when size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
	free(s);
}
