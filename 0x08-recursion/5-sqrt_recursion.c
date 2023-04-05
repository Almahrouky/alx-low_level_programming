#include "main.h"

/**
 * sqr - is a function
 * @n: is a folat
 * @x: is a float
 * Return: a float
 */
float sqr(float n, float x)
{
float res;
res = (x + n / x) / 2;
if (x == res)
return (x);
else
{
sqr(n, res);
}
}

/**
 * _sqrt_recursion - is a function
 * @n: is an integer
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
{
int i;
i = sqr(n, n);
if (sqr(n, n) > i)
return (-1);
else
{
return (sqr(n, n));
}
}
}
