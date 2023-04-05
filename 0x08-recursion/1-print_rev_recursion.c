#include "main.h"

/**
 * _print_rev_recursion - is a function
 * @s: is a pointer char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
