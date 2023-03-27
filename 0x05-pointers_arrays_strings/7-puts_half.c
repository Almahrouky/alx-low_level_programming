#include "main.h"
#include <string.h>

/**
 * puts_half - is a function
 * @str: is a char pointer
 * Return: void
 */
void puts_half(char *str)
{
int i;
int j;
int k;
j = strlen(str);
k = (strlen(str) + 1) / 2;
for (i = k; i < j; i++)
{
putchar(str[i]);
}
}
