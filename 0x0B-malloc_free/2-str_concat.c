#include "main.h"

/**
 * str_concat - is the function
 * @s1: is a pointer char
 * @s2: is a pointer char
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *x = (char *)malloc(sizeof(s1) + sizeof(s2));
if (s1 == NULL || s2 == NULL)
return (NULL);
for (i = 0; i < sizeof(s1); ++i)
x[i] = s1[i];
for (i = 0; i < sizeof(s2); ++i)
x[i] = s2[i];
return (x);
}
