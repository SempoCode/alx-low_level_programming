#include"lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: double poiter to list
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *n = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (n == NULL)
		return (NULL);
	while (str[i])
		i++;
	n->str = strdup(str);
	n->len = i;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
	}
	return (n);
}
