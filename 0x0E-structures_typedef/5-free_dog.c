#include "dog.h"

/**
 * free_dog - is a fundc
 * @d: is adjk
 * Return: vid
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
