#include "main.h"

/**
 * reverse_array - is a function
 * @a: is a pointer char
 * @n: is an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int x, i;
int arr[100];
x = n;
for (i = 0; i < n; ++i)
arr[i] = a[i];
for (i = 0; i < n; ++i)
{
x--;
a[i] = arr[x];
}
}
