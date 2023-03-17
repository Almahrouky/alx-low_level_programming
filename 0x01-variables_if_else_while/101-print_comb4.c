#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (k = 0; k < 8; ++k)
{
for (i = k + 1; i < 9; ++i)
{
for (j = i + 1; j < 10; ++j)
{
putchar(k + '0');
putchar(i + '0');
putchar(j + '0');
if (k + i + j != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
