#include "lists.h"
/**
 * free_list - is a function that frees a list_t list.
 * @head: is a pointer to the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
