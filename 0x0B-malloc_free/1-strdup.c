#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
char *p = (char *)malloc(strlen(str) + 1);
strcpy (p, str);
if (str == NULL)
return (NULL);
return (p);
}
