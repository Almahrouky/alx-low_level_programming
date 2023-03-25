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
n = 0;
for (j = 0; j < 10; ++j)
{
if (n + i >= 10)
{
if (n / 10 != 0)
putchar(n / 10 + '0');
putchar(n % 10 + '0');
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
else
{
putchar(n + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
n += i;
}
putchar('\n');
}
}
