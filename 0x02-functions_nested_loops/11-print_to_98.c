#include "main.h"

/**
 * print_to_98 - This is a description
 *@n: is a variable
 * Return: no someting
 */
void print_to_98(int n)
{
if (n < 0)
{
while(n  !=  0)
{
if(n <= -10)
{
putchar('-');
n = n * (-1);
putchar(n / 10 + '0');
putchar(n % 10 +'0');
putchar(',');
putchar(' ');
}
else
{
putchar('-');
n = n * -1;
putchar(n + '0');
putchar(',');
putchar(' ');
}
n -= 1;
n = n * (-1);
}
}
if (n < 98)
{
while (n  != 99)
{
 if (n >= 10)
{
putchar(n / 10 + '0');
putchar(n % 10 +'0');
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
else
{
putchar(n + '0');
putchar(',');
putchar(' ');
}
n += 1;
}
}
else
{
while(n != 97)
{
if (n >= 100)
{
putchar(n / 100 + '0');
int x;
x = n - 100;
putchar(x / 10 + '0');
putchar(x % 10 +'0');
putchar(',');
putchar(' ');
}
else
{
putchar(n / 10 + '0');
putchar(n % 10 +'0');
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
n -= 1;
}
}
}
