#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a linked list
 * @listint_t: pointer to the linked list
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
