#include "main.h"

/**
 * string_nconcat - is a function
 * @s1: is a pionter char
 * @s2: is a pionter char
 * @n: is an unsigned int
 * Return: a pionter char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n >= strlen(s2))
n = strlen(s2);
ptr = malloc(sizeof(char) * (strlen(s1) + 1 + n));
if (ptr == NULL)
return (NULL);
strcpy(ptr, s1);
strncat(ptr, s2, n);
return (ptr);
}
