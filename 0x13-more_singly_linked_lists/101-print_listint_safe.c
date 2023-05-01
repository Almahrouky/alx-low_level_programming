#include "lists.h"

/**
 * print_listint_safe - is a function that prints
 * a listint_t linked list.
 * @head: is the head pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *cur, *pr;
if (head == NULL)
return (0);
pr = head;
while (pr)
{
printf("[%p] %d\n", (void *)pr, pr->n);
count++;
cur = pr;
pr = pr->next;
if (cur <= pr)
{
printf("-> [%p] %d\n", (void *)pr, pr->n);
exit(98);
}
}
return (count);
}
