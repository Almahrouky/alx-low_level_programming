#include "main.h"

/**
 * _memcpy - is a function
 * @dest: is a pointer char
 * @src: is a char
 * @n: is a variable
 * Return: pointer char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
