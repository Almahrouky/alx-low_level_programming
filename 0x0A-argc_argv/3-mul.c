#include "main.h"

/**
 * main - is the main function
 * @argc: is an integer
 * @argv: is an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int i;
int mul;
mul = 1;
for (i = 1; i < argc; ++i)
mul *= strtol(argv[i], NULL, 10);
printf("%d\n", mul);
return (0);
}
}
