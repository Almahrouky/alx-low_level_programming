#include "lists.h"
/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: is a pointer to the start of nodes
 * Return: the number of elements in the linked list_t list
 */
size_t list_len(const list_t *h)
{
const list_t *nw = h;
size_t count = 0;
while (nw != NULL)
{
count++;
nw = nw->next;
}
return (count);
}
