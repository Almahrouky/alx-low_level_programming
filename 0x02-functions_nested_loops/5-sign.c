#include "main.h"

/**
 * print_sign - This is a description
 * @n: This is an integer the user input
 *
 * Return: something
 */
int print_sign(int n)
{
if (n > 0)
{
printf("%c\n", '+');
return (1);
}
else if (n < 0)
{
printf("%c\n", '-');
return (-1);
}
else
{
printf("%c\n", '0');
return (0);
}
}
