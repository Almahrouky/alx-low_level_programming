#include "main.h"

/**
 * string_toupper - is a function
 * @s: is a char pointer
 * Return: pointer char
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i]; ++i)
{
s[i] = toupper(s);
}
return (s);
}
