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
for (i = 0; i < strlen(str); i = i + 2)
putchar(str[i]);
}
