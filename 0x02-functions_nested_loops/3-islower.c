#include <stdio.h>
/**
 * _islower - This is a description
 * @c: This is an integer the user input
 *
 * Return: 1 if islower else return 0
 */
int _islower(int c)
{
return (islower(c) == 2);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
