#include "lists.h"

/**
 * free_listint - is a function that frees a
 * listint_t list.
 * @head: is the head pointer
 * Retrun: nothing
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
