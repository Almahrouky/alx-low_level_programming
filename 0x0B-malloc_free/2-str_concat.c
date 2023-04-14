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
ptr = malloc(strlen(s1) + strlen(s2) + 1);
strcpy(ptr, s1);
strcat(ptr, s2);
return (ptr);
}
