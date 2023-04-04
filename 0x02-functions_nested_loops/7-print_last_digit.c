#include "main.h"

/**
 * print_last_digit - This is a description
 * @c: This is an integer the user input
 *
 * Return: something
 */
int print_last_digit(int c)
{
putchar(c % 10 + '0');
return (c % 10);
}
