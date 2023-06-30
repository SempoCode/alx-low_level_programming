#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list of elements
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *l;
	size_t i = 0;

	for (l = h; l != NULL; l = l->next)
	{
		if (l->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", l->len, l->str);
		}
		i++;
	}
	return (i);
}
