#include "lists.h"

/**
 * find_listint_loop - is a function that finds
 * the loop in a linked list.
 * @head: is the head pointer
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slw, *fst;
int flag = 0;
slw = head;
fst = head;
while (slw && fst && fst->next)
{
slw = slw->next;
fst = fst->next->next;
if (slw == fst)
{
flag = 1;
break;
}
}
if (!flag)
return (NULL);
slw = head;
while (slw != fst)
{
slw = slw->next;
fst = fast->next;
}
return (fst);
}
