#include <stdio.h>
#pragma once

/**
 * print_alphabet - print_alphabet
 *
 * Return: Thealphabet.
 */
int print_alphabet(void)
{
int i;
for (i = 97; i < 123; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
