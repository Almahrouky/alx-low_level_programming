#include "main.h"

/**
 * print_alphabet_x10 - is a function
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; ++j)
{
int i;
for (i = 97; i < 123; ++i)
{
putchar(i);
}
putchar('\n');
}
}
