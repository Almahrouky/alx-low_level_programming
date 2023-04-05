#include "main.h"

/**
 * _sqrt_recursion - is a function
 * @n: is an integer
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
float f;
int i;
f = sqrt (n);
i = sqrt (n);
if (n < 0)
return (-1);
else if (f - i > 0)
return (-1);
else
{
return (sqrt(n));
}
}
