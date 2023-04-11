#include "main.h"

/**
 * str_concat - is the function
 * @s1: is a pointer char
 * @s2: is a pointer char
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
unsigned int j, i;
char *x = (char *)malloc(strlen(s1) + strlen(s2) + 1);
for (i = 0; i < strlen(s1); ++i)
x[i] = s1[i];
j = 0;
for (; i < strlen(s1) + strlen(s2) + 1; ++i)
{
x[i] = s2[j];
j++;
}
return (x);
}
