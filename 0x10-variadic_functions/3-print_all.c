#include "variadic_functions.h"

/**
 * print_all - is a function
 * @format: is something
 * Return: void
 */
void print_all(const char * const format, ...)
{
char *s;
int j;
va_list ptr;
va_start(ptr, format);
j = 0;
while (format[j])
{
switch (format[j])
{
case 'c':
printf("%c", va_arg(ptr, int));
break;
case 'i':
printf("%d", va_arg(ptr, int));
break;
case 'f':
printf("%f", va_arg(ptr, double));
break;
case 's':
s = va_arg(ptr, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
j++;
continue;
}
if (format[j + 1])
printf(", ");
j++;
}
putchar('\n');
va_end(ptr);
}
