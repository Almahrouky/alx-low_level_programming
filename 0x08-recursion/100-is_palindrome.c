#include "main.h"

/**
 * is_palindrome - is a function
 * @s: is an integer
 * Return: an integer
 */
int is_palindrome(char *s)
{
int i, k, flag;
char a[100];
k = 0;
flag = 1;
if (s == NULL)
return (1);
else
{
for (i = 0; s[i]; ++i)
{
k++;
}
k--;
for (i = 0; s[i]; ++i)
{
a[k] = s[i];
k--;
}
for (i = 0; s[i]; ++i)
{
if (a[i] != s[i])
flag = 0;
}
return (flag);
}
}
