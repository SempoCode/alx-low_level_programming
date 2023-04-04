#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - prints length of a linked list
 * @h: is pointer to the linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}

	return (j);
}
