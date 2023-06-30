#include "lists.h"

/**
 * list_len - calculates number of elements in a linked list_t list
 * @h: pointer to the list
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *l;
	size_t i = 0;

	for (l = h; l != NULL; l = l->next)
		i++;
	return (i);
}
