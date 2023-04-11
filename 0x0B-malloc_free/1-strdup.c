#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
exit (0);
}
char *p;
p = (char *)malloc(strlen(str) + 1);
strcpy(p, str);
return (p);
}
