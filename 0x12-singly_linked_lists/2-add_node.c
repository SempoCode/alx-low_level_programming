#include "lists.h"

/**
 * add_node - function that adds a new node at the end of a list_t list.
 * @head: double pointer to the list
 * @str: pointer the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	unsigned int l = 0;

	while (!n)
		return (NULL);
	while (str[l])
		l++;
	n->str = strdup(str);
	n->len = l;
	n->next = *head;
	*head = n;

	return (n);
}
