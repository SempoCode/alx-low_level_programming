#include "main.h"
/**
 * _strcpy - thsi function copies a string
 * @dest: pointer to where the string is copied to
 * @src: pointer to where the string is copied from
 * Return: Characters when successful
 */
char *_strcpy(char *dest, char *src)
{
	int i, leng;

	for (i = 0; src[i] != '\0'; i++)
	{
		leng = i;
	}
	for (i = 0; i <= leng; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
