#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node to the linked list
 * @head: pointer to a pointer
 * @n: data added to the node
 * Return: the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	h->n = n;
	h->next = NULL;

	if (*head == NULL)
	{
		*head = h;
	}
	else
	{
		listint_t *k = *head;

		while (k->next != NULL)
		{
			k = k->next;
		}
		k->next = h;
	}
	return (*head);
}
