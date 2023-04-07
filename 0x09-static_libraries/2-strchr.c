#include "main.h"

/**
 * _strchr - is afunction
 * @s: is a pointer char
 * @c: is a char
 * Return: pointer char
 */
char *_strchr(char *s, char c)
{
if (strchr(s, c) == NULL)
return (NULL);
else
return (strchr(s, c));
}
