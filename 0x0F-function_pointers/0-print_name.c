#include "function_pointers.h"

/**
 * print_name - is a function
 * @name: is a pointer char
 * @f: is some thing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
(*f) (name);
}
