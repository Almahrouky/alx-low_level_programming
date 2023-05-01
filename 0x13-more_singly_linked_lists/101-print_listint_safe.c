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
const listint_t *cur;
while (head)
{
printf("[%p] %d", head, head->n);
count++;
cur = head;
head = head->next;
if (cur <= head)
{
printf("-> [%p] %d", head, head->n);
exit (98);
}
}
return (count);
}
