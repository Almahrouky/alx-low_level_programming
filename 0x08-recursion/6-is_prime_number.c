#include "main.h"
/**
 * isprime - is a function
 * @n: is an integer
 * @x: is an integer
 * Return: an integer
 */
int isprime(int n, int x)
{
if (x > 2)
{
if (n % x == 0 && n != x)
return (0);
else
{
return (1 && (isprime(n, x - 1)));
}
}
else
return (1);
}

/**
 * is_prime_number - is a function
 * @n: is an integer
 * Return: an integer
 */
int is_prime_number(int n)
{
int flag;
flag = 1;
if (n <= 1)
flag = 0;
else
{
flag = isprime(n, n);
}
return (flag);
}
