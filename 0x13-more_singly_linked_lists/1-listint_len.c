#include "lists.h"

/**
 * listint_len - is a function that returns the number of elements
 * in a linked listint_t list.
 * @h: is a pointer to the nodes
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cur = h;
int count = 0;
while (cur != NULL)
{
cur = cur->next;
count++;
}
return (count);
}
