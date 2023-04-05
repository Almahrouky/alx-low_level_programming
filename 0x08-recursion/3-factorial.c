#include "main.h"

/**
 * factorial - is a function
 * @n: is an integer
 * Return: an integer
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
{
return (n * factorial(n - 1));
}
}
