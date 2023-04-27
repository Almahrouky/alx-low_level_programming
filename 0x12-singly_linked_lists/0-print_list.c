#include "main.h"
/**
 * print_list - is a function that prints all the elements of a list_t list
 * @h: is pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *cur = h;
while (cur != NULL)
{
if (cur->str == NULL)
printf("[0] (nil)");
else
printf("[%d] (%s)", cur->len, cur->str);
cur = cur->next;
count++;
}
return (count);
}
