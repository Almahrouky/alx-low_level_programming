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
int i, j;
char *ptr;
if (n >= strlen(s2))
{
ptr = malloc(strlen(s1) + strlen(s2) + 1)
if (ptr == NULL)
return (NULL);
for (i = 0; i < strlen(s1); ++i)
{
ptr[i] = s1[i];
}
j = 0;
for (; i < strlen(s1) + strlen(s2) + 1; ++i)
{
ptr[i] = s2[j];
}
j++;
}
else
{
ptr = malloc(strlen(s1) + 1 + n);
if (ptr == NULL)
return (NULL);.
for (i = 0; i < strlen(s1); ++i)
{
ptr[i] = s1[i];
}
j = 0;
for (; i < strlen(s1) + n + 1; ++i)
{
ptr[i] = s2[j];
}
j++;
}
}

	
return (ptr);
}
