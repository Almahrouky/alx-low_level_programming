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
unsigned int j;
char *x = (char *)malloc(strlen(s1) + strlen(s2) + 1);
j = 0;
for (i = 0; i < strlen(s1) + strlen(s2) + 1; ++i)
if (i == strlen(s1);
{
x[i] = s2[j];
j++;
}
x[i] = s1[i];
return (x);
}
