#include "main.h"

/**
 * reverse_array - is a function
 * @a: is a pointer char
 * @n: is an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int x, *b, i;
x = n - 1;
b = a;
for (i = 0; i < n; ++i)
{
a[i] = b[x];
x--;
}
}
