#include "main.h"

/**
 * argstostr - is the function
 * @ac: is an integer
 * @av: is a pointer char
 * Return: a pointer char
 */
char *argstostr(int ac, char **av)
{
int i, j;
char *ptr = (char *)malloc(2 * ac * sizeof(char));
if (ptr == NULL)
return (NULL);
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0, j = 0; i < ac; j++, i = i + 1)
{
ptr[i] =(char *)av[j];
ptr[i + 1] = '\n';
}
return (ptr);
}
