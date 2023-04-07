#include "main.h"

/**
 * _memset - is a function
 * @s: is a pointer char
 * @b: is a char
 * @n: is a variable
 * Return: pointer char
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
