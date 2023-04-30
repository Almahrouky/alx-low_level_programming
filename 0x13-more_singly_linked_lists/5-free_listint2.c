#include "lists.h"

/**
 * free_listint2 - is a function that frees a listint_t list.
 * @head: is a pointer to the head pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
