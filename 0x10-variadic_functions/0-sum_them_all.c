#include <variadic_functions.h>

/**
 * sum_them_all - is a function
 * @n: is the number
 * @...: is something
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
int sum, i;
va_list ptr;
va_start(ptr, n);
i = n;
while (i--)
{
sum += va_arg(ptr, unsigned int);
}
va_end(ptr);
return (sum);
}
