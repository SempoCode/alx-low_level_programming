0x13. C - More singly linked lists

0. Write a function that prints all the elements of a listint-t list

1. Write a function that returns the number of elements in a linked listint-t list.

Prototype: size-t listint-len(const listint-t *h);

2. Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint-t *add-nodeint(listint-t **head, const int n);
Return: the address of the new element, or NULL if it failed

3. Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

4. Write a function that frees a listint-t list.

Prototype: void free-listint(listint-t *head);

5. Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

6. Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

7. Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get-nodeint-t-index(listint-t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

8. Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

9.Write a function that inserts a new node at a given position.

10. Write a function that deletes the node at index index of a listint-t linked list.
