#include "dog.h"

/**
 * init_dog - is a function
 * @d: is a object
 * @name: is a pointer char
 * @age: is a float
 * @owner: is a pointer char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
