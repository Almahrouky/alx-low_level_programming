#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char messege[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;
for (i = 0 ; messege[i] != '\0'; ++i)
{
putchar (messege[i]);
}
putchar ('\n');
return (1);
}
