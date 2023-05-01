#include "lists.h"

/**
 * free_listint_safe - is a function that frees
 * a listint_t list.
 * @h: is a pointer to the head pointer
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *cur, *pr;
if (*h == NULL || h == NULL)
return (0);
pr = *h;
while (pr)
{
count++;
cur = pr;
free(pr);
pr = pr->next;
if (cur <= pr)
{
break;
}
}
*h = NULL;
return (count);
}
