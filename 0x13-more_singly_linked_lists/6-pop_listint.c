#include "lists.h"

/**
 * pop_listint - is a function that deletes
 * the head node of a listint_t linked list
 * @head: is a pointer to the head pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int dt;
if (*head == NULL)
return (0);
tmp = *head;
dt = (*head)->n;
*head = (*head)->next;
free(tmp);
return (dt);
}
