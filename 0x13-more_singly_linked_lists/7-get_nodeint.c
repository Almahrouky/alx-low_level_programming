#include "lists.h"

/**
 * get_nodeint_at_index - is a function that returns
 * the nth node of a listint_t linked list.
 * @head: is the head pointer
 * @index: is the index of node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
tmp = head;
for (i = 0; i < index; ++i)
{
if (tmp == NULL)
return (NULL);
tmp = tmp->next;
}
return (tmp);
}
