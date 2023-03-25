#include <stdio.h>
#include "main.h"

/**
 * printfizzx - is a functon
 * Return: void
 */
void printfizzx(void)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
}

/**
 * printbuzzx - is a functon
 * Return: void
 */
void printbuzzx(void)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
}

/**
 * printfizz - is a functon
 * Return: void
 */
void printfizz(void)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}

/**
 * printbuzz - is a function
 * Return: void
 */
void printbuzz(void)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
/**
 * main - is the main function
 * Return: 0 if it is good otherwise 1
 */
int main(void)
{
int i;
for (i = 1; i <= 100; ++i)
{
if (i < 10)
{
if (i % 3 == 0 && i % 5 != 0)
printfizz();
else if (i % 5 == 0 && i % 3 != 0)
printbuzz();
else
{
putchar(i + '0');
putchar(' ');
}
}
else
{
if (i % 3 == 0 && i % 5 != 0)
printfizz();
else if (i % 5 == 0 && i % 3 != 0)
{
if (i != 100)
printbuzz();
else
printbuzzx();
}
else if (i % 3 == 0 && i % 5 == 0)
{printfizzx();
printbuzz(); }
else
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
