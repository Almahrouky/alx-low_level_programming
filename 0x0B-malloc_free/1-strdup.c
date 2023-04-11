#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
char *s = (char *)malloc(strlen(str));
s = str;
free (str);
if (str == NULL)
return (NULL);
else
return (s);
}
