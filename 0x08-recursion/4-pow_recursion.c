#include "main.h"

/**
 * _pow_recursion - is a function
 * @x: is an integer
 * @y: is an integer
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
int i;
if (y < 0)
return (-1);
else
{
i = pow(x, y);
return (i);
}
}