#include "lists.h"
/**
 * listint_len - prints length of a linked list
 * @h: is pointer to the linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
