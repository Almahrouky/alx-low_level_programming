#include "main.h"

/**
 * reverse_array - is a function
 * @a: is a pointer char
 * @n: is an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, x;
int arr[n];
x = n - 1;
for (i = 0; i < n; ++i)
{
arr[i] = a[i];
}
for (i = 0; i < n; ++i)
{
a[i] = arr[x];
x--;
}
}
