#include "main.h"

/**
 * binary_to_uint - is a function that converts
 * a binary number to an unsigned int.
 * @b: is a pointer to the binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
unsigned int ml = 1;
int i;
if (b == NULL)
return (0);
for (i = (strlen(b) - 1); i >= 0; --i)
{
if (b[i] != '1' && b[i] != '0')
return (0);
if (b[i] == '1')
n += ml;
ml *= 2;
}
return (n);
}
