#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
char *s = (char *)malloc(strlen(str));
for (size_t i = 0; i < strlen(str); ++i)
{
s[i] = str[i];
}
free (str);
if (str == NULL)
return (NULL);
else
return (s);
}
