#include "main.h"

/**
 * cap_string - is a function
 * @s: is a pointer char
 * Return: pointer char
 */
char *cap_string(char *s)
{
int i;
while (s[i])
{
if (i == 0 || isspace(s[i - 1]) || s[i - 1] == '.' || s[i - 1] == ',')
{
if (s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
{
if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
s[i] = toupper(s[i]);
}
}
i++;
}
return (s);
}
