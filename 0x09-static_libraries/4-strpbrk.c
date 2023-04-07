#include "main.h"

/**
 * _strpbrk - is a function
 * @s: is a pointer char
 * @accept: is a pointer char
 * Return: pointer char
 */
char *_strpbrk(char *s, char *accept)
{
if (strpbrk(s, accept) == NULL)
return (NULL);
else
return (strpbrk(s, accept));
}
