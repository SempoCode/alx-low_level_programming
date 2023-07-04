#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of linked list
 * @head: pointer to a pointer
 * @n: data added to the node
 * Return: the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		listint_t *s = *head;

		while (s->next != NULL)
			s = s->next;
		s->next = node;
	}
	return (*head);
}
