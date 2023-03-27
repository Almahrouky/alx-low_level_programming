#include "main.h"
#include <string.h>

/**
 * puts2 - is a function
 * @str: is a char pointer
 * Return: void
 */
void puts2(char *str)
{
int i;
int j;
j = strlen(str);
for (i = 0; i < j; i = i + 2)
putchar(str[i]);
putchar('\n');
}
