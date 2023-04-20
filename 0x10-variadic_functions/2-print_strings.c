#include "variadic_functions.h"

/**
 * print_strings - is a function
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
char *s;
int i;
if (separator == NULL)
separator = "";
va_start(ptr, n);
i = n;
while (i--)
{
s = va_arg(ptr, char *);
if (i != 0)
{
if (s == NULL)
printf("(nil)%s", separator);
else
printf("%s%s", s, separator);
}
else
{
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
}
putchar('\n');
va_end(ptr);
}
