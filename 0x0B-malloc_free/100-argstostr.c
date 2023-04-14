#include "main.h"

/**
 * argstostr - is the function
 * @ac: is an integer
 * @av: is a pointer char
 * Return: a pointer char
 */
char *argstostr(int ac, char **av)
{
int index, lens, i, j;
char *ptr;
if (ac == 0 || av == NULL)
return (NULL);
lens = 0;
for (i = 0; i < ac; ++i)
{
lens += strlen(av[i]) + 1;
}
ptr = malloc(lens * sizeof(char));
if (ptr == NULL)
return (NULL);
index = 0;
for (i = 0; i < ac; ++i)
{
strcpy(ptr + index, av[i]);
index += strlen(av[i]);
ptr[index] = '\n';
index++;
}
return (ptr);
}
