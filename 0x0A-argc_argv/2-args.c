#include "main.h"

/**
 * main - is the main function
 * @argc: is an integer
 * @argv: is an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; ++i)
printf("%s\n", argv[i]);
return (0);
}
