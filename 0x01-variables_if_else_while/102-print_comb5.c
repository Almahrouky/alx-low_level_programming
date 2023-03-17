#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
int k;
int i;
int j;
for (l = 0; l <= 9; ++l)
{
for (k = 0; k <= 8; ++k)
{
for (i = l; i <= 9; ++i)
{
for (j = k ; j <= 9; ++j)
{
if (l == i && k == j)
continue;
else
{
putchar(l + '0');
putchar(k + '0');
putchar(' ');
putchar(i + '0');
putchar(j + '0');
if (l != 9 || k != 8 || i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
