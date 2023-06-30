#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: pointer to the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *n;

	for (n = head; n; n = n->next)
	{
		free(n->str);
		free(n);
	}
}
