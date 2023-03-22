#include "main.h"

/**
 * jack_bauer - This is a description
 *
 * Return: something
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; ++i)
{
for (j = 0; j <= 9; ++j)
{
for (k = 0; k <= 5; ++k)
{
for (l = 0; l <= 9; ++l)
{
putchar(i + '0');
putchar(j + '0');
putchar(':');
putchar(k + '0');
putchar(l + '0');
putchar('\n');
if (i == 2 && j == 3 && k == 5 && l == 9)
i = j = k = l = 10;
}
}
}
}
