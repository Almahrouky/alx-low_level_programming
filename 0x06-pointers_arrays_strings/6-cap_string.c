#include "main.h"

/**
 * cap_string - is a function
 * @s: is a pointer char
 * Return: pointer char
 */
char *cap_string(char *s)
{
int i, x;
x = 0;
while (s[i])
{
if (i == 0 || isspace(s[i - 1]) || s[i - 1] == '.' || s[i - 1] == ',')
x++;
if (s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
x++;
if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
x++;
if (s[i - 1] == '\t')
x++;
if (x > 0)
s[i] = toupper(s[i]);
i++;
x = 0;
}
return (s);
}
