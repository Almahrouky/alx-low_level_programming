#include "main.h"

/**
 * print_number - is a function
 * @n: is an integer
 * Return: void
 */
void print_number(int n)
{
int i, x;
int a[20];
x = 0;
if (n == 0)
putchar('0');
else
{
if (n < 0)
{
putchar('-');
n = -n;
}
while (n > 0)
{
a[x++] = n % 10;
n = n / 10;
}
for (i = x - 1; i >= 0; --i)
{
putchar(a[i] + '0');
}
}
}
