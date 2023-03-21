#include <stdio.h>
/**
 * _isalpha - This is a decriotoin
 * @c: is input from user
 *
 * Return: 1 or 0
 */
int _isalpha(int c);
int _isalpha(int c)
{
return (islower(c) == 2 || isupper(c) == 1);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);
}
