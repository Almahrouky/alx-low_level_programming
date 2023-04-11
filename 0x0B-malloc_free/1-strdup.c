#include "main.h"

/**
 * _strdup - is a function
 * @str: is a pointer char
 * Return: a pointer char
 */
char *_strdup(char *str)
{
char *ptr = (char *)malloc(strlen(str) * sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
strcpy(ptr, str);
return (ptr);
}
