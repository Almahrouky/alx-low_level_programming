#include "main.h"

/**
 * print_square - is a discription
 *
 * @size: is someting
 * Return: void
 */
void print_square(int size)
{
if (size > 0)
{
int i, j;
for (i = 0; i < size; ++i)
{
for (j = 0; j < size; ++j)
putchar('#');
putchar('\n');
}
}
else
putchar('\n');
}
