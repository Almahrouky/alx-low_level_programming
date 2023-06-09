#include "main.h"

/**
 * _realloc - is a function
 * @ptr: is a void pointer
 * @old_size: is an unsigned int
 * @new_size: is an unsigned int
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ppr;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ppr = malloc(new_size);
if (ppr == NULL)
return (NULL);
memcpy(ppr, ptr, (old_size < new_size ? old_size : new_size));
free(ptr);
return (ppr);
}
