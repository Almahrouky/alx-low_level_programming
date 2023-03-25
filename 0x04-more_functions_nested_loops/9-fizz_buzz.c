#include <stdio.h>
#include "main.h"

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
{
printfizz();
putchar(' ');
}
else if (i % 5 == 0 && i % 3 != 0)
{
if (i != 100)
{
printbuzz();
putchar(' ');
}
else
printbuzz();
}
else if (i % 3 == 0 && i % 5 == 0)
{
printfizz();
printbuzz();
putchar(' ');
}
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
