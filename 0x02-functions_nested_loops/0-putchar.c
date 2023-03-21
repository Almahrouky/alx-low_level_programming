#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[9] = "_putchar";
int i;
for (i = 0; i < 8; ++i)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
