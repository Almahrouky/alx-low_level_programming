#include "main.h"

/**
 * print_triangle - is a something
 *
 * @size: is an integer
 * Return: void
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j, k;
for (i = 0; i < size; ++i)
{
for (k = 0; k < size - (i + 1); ++k)
{
putchar(' ');
}
for (j = k; j < size; ++j)
putchar('#');
putchar('\n');
}
}
else
putchar('\n');
}
