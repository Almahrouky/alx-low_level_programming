#include "main"

/**
 * more_numbers - is a function
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
j = 10;
while (j--)
{
for (i = 0; i <= 14; ++i)
{
if (i >= 10)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
else
putchar(i + '0');
}
putchar('\n');
}
}
