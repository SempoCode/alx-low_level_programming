#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array on success, if
 * width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	return (s);
	free(s);
}
