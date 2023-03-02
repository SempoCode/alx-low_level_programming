#include "main.h"
/**
 * _strcat - this function concatenates two strings
 * @dest: Pointer to the string to which we append
 * @src: Pointer to the string which is appended
 * Return: returns character
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		j = i;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	return (dest);
}
