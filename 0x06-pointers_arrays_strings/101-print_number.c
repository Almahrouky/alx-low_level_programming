#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_number - is a function
 * @n: is an integer
 * Return: no thing
 */
void print_number(int n)
{
int i, x;
int a[20];
x = 0;
if (n == 0)
putchar('0');
else
{
if (n < 0)
{
putchar('-');
n = -n;
}
while (n > 0)
{
a[x++] = n % 10;
n = n / 10;
}
for (i = x - 1; i >= 0; --i)
{
putchar(a[i] + '0');
}
}
}
