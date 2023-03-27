#include "main.h"
#include <string.h>

/**
 * print_rev - is a function
 * @s: is a char pointer
 * Return: void
 */
void print_rev(char *s)
{
int i, j;
j = strlen(s);
for (i = j; i >= 0; --i)
{
putchar(s[i]);
}
putchar('\n');
}
