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
if (n == 2)
flag == 1;
else
{
for (i = 2; i <= sqrt(n); ++i)
{
if (n % i == 0)
flag = 0;
}
}
return (flag);
}
