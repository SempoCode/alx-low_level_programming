#include "main.h"
/**
 * _memcpy - copies the memory of the source to the destination
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
