#include "main.h"

/**
 * print_diagonal - is a function
 *
 * @n: is an integer
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
j = 0;
if (n > 0)
{
while (n--)
{
for (i = 0; i < j; ++i)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
j++;
}
}
putchar('\n');
}
