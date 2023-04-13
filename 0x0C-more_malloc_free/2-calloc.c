#include "main.h"

/**
 * _calloc - is a function
 * @nmemb: is an unsigned int
 * @size: is an unsigned int
 * Return: a pointer char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *ptr = malloc(nmemb * size);
if (ptr == NULL || size == 0 || nmemb == 0)
return (NULL);
for (i = 0; i < size * nmemb; i++)
ptr[i] = 0;
return (ptr);
}
