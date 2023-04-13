#include "main.h"

/**
 * _calloc - is a function
 * @nmemb: is an unsigned int
 * @size: is an unsigned int
 * Return: a pointer char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (size == 0 || nmemb == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
