#include "main.h"

/**
 * _print_rev_recursion - is a function
 * @s: is a pointer char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
int i, k;
k = 0;
for (i = 0; s[i]; ++i)
{
k++;
}
for (i = k; i > 0; --i)
{
putchar(s[i]);
}
}
