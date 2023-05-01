#include "lists.h"

/**
 * delete_nodeint_at_index - is a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: is a pointer to the head pointer
 * @index: is the index to node needed to be deleted
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp, *back;
if (!*head || !head)
return (-1);
tmp = *head;
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
for (i = 0; i < index; ++i)
{
if (!tmp)
return (-1);
back = tmp;
tmp = tmp->next;
}
back->next = tmp->next;
free(tmp);
return (1);
}
