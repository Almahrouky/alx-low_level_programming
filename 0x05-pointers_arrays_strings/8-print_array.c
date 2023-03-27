#include "main.h"

/**
 * print_array - is a funciton
 * @a: is an integer
 * @n: is a pointer
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; ++i)
{
printf("%d", a[i]);
if (i != n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
