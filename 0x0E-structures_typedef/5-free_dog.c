#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - is a fundc
 * @d: is adjk
 * Return: vid
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->age)
free(d->age);
if (d->owner)
free(d->owner);
free(d);
}
}
