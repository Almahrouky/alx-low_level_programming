#include "variadic_functions.h"

/**
 * print_numbers - is a function
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
int i;
if (separator == NULL)
separator = "";
va_start(ptr, n);
i = n;
while (i--)
{
if (i == 0)
printf("%d", va_arg(ptr, int));
else
printf("%d%s", va_arg(ptr, int), separator);
}
putchar('\n');
va_end(ptr);
}
