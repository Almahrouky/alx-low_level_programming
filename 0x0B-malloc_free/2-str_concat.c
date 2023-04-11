#include "main.h"

/**
 * str_concat - is the function
 * @s1: is a pointer char
 * @s2: is a pointer char
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i;
char *x = (char *)malloc(strlen(s1) + strlen(s2));
if (s1 == NULL || s2 == NULL)
return (NULL);
for (i = 0; i < strlen(s1); ++i)
x[i] = s1[i];
for (i = strlen(s1); i < strlen(s2); ++i)
x[i] = s2[i];
return (x);
}
