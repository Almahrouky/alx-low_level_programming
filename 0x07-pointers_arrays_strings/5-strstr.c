#include "main.h"

/**
 * _strstr - is a function
 * @haystack: is a pointer char
 * @needle: is a pointer char
 * Return: pointer char
 */
char *_strstr(char *haystack, char *needle)
{
if (strstr(haystack, needle)  == NULL)
return (NULL);
else
return (strstr(haystack, needle));
}
