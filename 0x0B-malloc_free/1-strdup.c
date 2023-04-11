#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
char *p = (char *)malloc(strlen(str)*sizeof(char));
if (str == NULL)
return (NULL);
strcpy(p, str);
return (p);
}
