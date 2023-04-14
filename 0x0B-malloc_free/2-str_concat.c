#include "main.h"

/**
 * str_concat - is the function
 * @s1: is a pointer char
 * @s2: is a pointer char
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
if (s1 == NULL)
s1 == "";
if (s2 == NULL)
s2 = "";
ptr = malloc(strlen(s1) + strlen(s2) + 1);
if (ptr == NULL)
return (NULL);
strcpy(ptr, s1);
strcat(ptr, s2);
ptr[strlen(s1) + strlen(s2)] = '\0';
return (ptr);
}
