#include <stdio.h>
#include "main.h"

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
