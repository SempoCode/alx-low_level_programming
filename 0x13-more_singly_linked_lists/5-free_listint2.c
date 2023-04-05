#include <stdio.h>
#include "lists.h"
#include<stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
	return;

	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}

	*head = NULL;
}
