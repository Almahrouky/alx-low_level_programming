#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
return (0);
}
