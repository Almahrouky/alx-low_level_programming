#include "lists.h"

/**
 * print_listint - is a function that prints all the
 * elements of a listint_t list.
 * @h: is a pointer to the nodes
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cur = h;
int count = 0;
while (cur != NULL)
{
printf("%d\n", cur->n);
cur = cur->next;
count++;
}
return (count);
}
