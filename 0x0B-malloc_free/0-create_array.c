#include "main.h"

/**
 * create_array - is a pionter char
 * @size: is an unsigned int
 * @c: is a char
 * Return: a pointer char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x = malloc(size);
for (i = 0; i < size; ++i)
x[i] = c;
if (size == 0)
return (NULL);
else
return (x);
}
