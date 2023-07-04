#include "lists.h"
/**
 * add_nodeint - adds node to the linked list
 * @head: pointer to a pointer
 * @n: data added to the node
 * Return: the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
