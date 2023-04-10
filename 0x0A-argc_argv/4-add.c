#include "main.h"

/**
 * main - is the main function
 * @argc: is an integer
 * @argv: is an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
int flag, i, sum;
sum = 0;
flag = 1;
if (argc == 1)
;
else
{
for (i = 1; i < argc; ++i)
{
if (isdigit(*argv[i]))
continue;
else
{
printf("Error\n");
flag = 0;
break;
}
}
}
if (flag == 0)
return (1);
else
{
for (i = 0; i < argc; ++i)
{
sum += strtol(argv[i], NULL, 10);
}
printf("%i\n", sum);
return (0);
}
}
