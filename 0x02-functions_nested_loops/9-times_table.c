#include "main.h"

/**
 * times_table - This is a description
 *
 * Return: someting
 */
void times_table(void)
{
int i, j;
int n;
for (i = 0; i < 10; ++i)
{
for (j = 0; j < 10; ++j)
{
if (j == 0)
n = j;
if (n  >= 10)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
if (j != 9)
{
putchar(',');
putchar(' ');
n += i;
}
}
else
{
putchar(n + '0');
if (j != 9)
{
putchar(',');
putchar(' ');
putchar(' ');
n += i;
}
}
}
putchar('$');
putchar('\n');
}
}
