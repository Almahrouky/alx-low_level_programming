#include "main.h"

/**
 * is_prime_number - is a function
 * @n: is an integer
 * Return: an integer
 */
int is_prime_number(int n)
{
int i;
int flag;
flag = 1;
if (n <= 1)
flag = 0;
else
{
int x;
x = n / 2;
point:
if ((n % x) == 0)
flag = 0;
else
{
x--;
if (x > 2)
goto point;
}
}
return (flag);
}
