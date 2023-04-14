#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - is the main function
 * @argc: is an int
 * @argv: is an int pointer
 * Return: 0 if succeed
 */
int main(int argc, char *argv[])
{
size_t i;
long int x1, x2, x3;
char *num1 = argv[1];
char *num2 = argv[2];
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 0; i < strlen(num1);++i)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error\n");
exit(98);
}
}
for (i = 0; i < strlen(num2);++i)
{
if (num2[i] < '0' || num2[i] > '9')
{
printf("Error\n");
exit(98);
}
}
x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
x3 = x1 * x2;
printf("%ld\n", x3);
return (0);
}
