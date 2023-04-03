#include "main.h"

/**
 * print_diagsums - is a function
 * @a: is a pointer char
 * @size: is an integer
 * Return: void
 */
void print_diagsums(int a[][], int size)
{
int i, j, sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; ++i)
{
for (j = 0; j <size; ++j)
{
if (i == j)
sum1 += a[i][j];
if (i + j == size - 1)
sum2 += a[i][j];
}
}
printf("%d", sum1);
putchar('\n');
printf("%d", sum2);
}
