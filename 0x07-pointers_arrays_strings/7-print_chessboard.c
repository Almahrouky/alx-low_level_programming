#include "main.h"
/**
 * print_chessboard - is a functoin
 * @a: is a pointer char
 * Return: void
 */
void print_chessboard(char s(*a)[8])
{
int i, j;
for (i = 0; i < a; ++i)
for (j = 0; j < 8; ++j)
putchar(s[i][j]);
}
