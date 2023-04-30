#include "lists.h"

/**
 * add_nodeint_end - is a function that adds a new node
 * at the end of a listint_t list.
 * @head: is the head pointer
 * @n: is the node data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *cur;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
cur = *head;
while (cur->next != NULL)
cur = cur->next;
cur->next = new_node;
}
return (new_node);
}
