#include <stdio.h>

/**
 * main - is the main function
 * @argc: is an integer
 * @argv: is a pointer char
 * Return: an integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s \n", argv[argc - 1]);
return (0);
}
