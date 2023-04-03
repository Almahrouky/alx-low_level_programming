#include "main.h"

/**
 * _strchr - is afunction
 * @s: is a pointer char
 * @c: is a char
 * Return: pointer char
 */
char *_strchr(char *s, char c)
{
strchr(s, c);
if (s[0])
return (s[0]);
else
return (NULL);
}
