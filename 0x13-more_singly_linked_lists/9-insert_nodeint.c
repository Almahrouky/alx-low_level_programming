#include "lists.h"

/**
 * insert_nodeint_at_index - is a function
 * that inserts a new node at a given position.
 * @head: is a pointer to the head pointer
 * @idx: is the index to put the node in
 * @n: is the data of this node
 * Return: this node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *tmp;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
tmp = *head;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; ++i)
{
if (!tmp)
return (NULL);
tmp = tmp->next;
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
