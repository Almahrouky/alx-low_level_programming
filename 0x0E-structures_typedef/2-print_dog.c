#include "dog.h"

/**
 * print_dog - is a function
 * @d: is a struct
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
if (name == NULL)
printf("Name: (nil)");
if (age == NULL)
printf("age: (nil)");
if (owner == NULL)
printf("owner: (nil)");
d->name = name;
d->age = age;
d->owner = owner;
}
else
printf("");
}
