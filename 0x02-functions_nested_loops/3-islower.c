#include <main.h>
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
_putchar(r + '0');
r = islower('o');
_putchar(r + '0');
r = islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
