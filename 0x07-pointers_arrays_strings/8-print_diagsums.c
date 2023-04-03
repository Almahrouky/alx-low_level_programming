#include "main.h"

/**
 * print_diagsums - is a function
 * @a: is a pointer char
 * @size: is an integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum1, sum2, x;
sum1 = 0;
sum2 = 0;
x = 0;
for (i = 0; i < size * size; i = i + size + 1)
sum1 += a[i];
for (i = size - 1; i < size * size; i = i + size - 1)
{
if (x == size)
break;
sum2 += a[i];
x++;
}
printf("%d", sum1);
putchar(',');
putchar(' ');
printf("%d", sum2);
putchar('\n');
}
