#include "lists.h"

/**
 * sum_listint - is a function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: is the head pointer
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp;
if (!head)
return (0);
tmp = head;
while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
