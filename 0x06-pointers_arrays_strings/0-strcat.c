#include "main.h"
/**
 * _strcat - this function concatenates two strings
 * @dest: Pointer to the string to which we append
 * @src: Pointer to the string which is appended
 * Return: returns character
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
