#include "main.h"
/**
 * _islower - This is a description
 * @c: This is an integer the user input
 *
 * Return: 1 if islower else return 0
 */
int _islower(int c)
{
int r;

r = islower('H');
putchar(r + '0');
r = islower('o');
putchar(r + '0');
r = islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
