#include "dog.h"
#include <stdio.h>

/**
 * print_dog - is a function
 * @d: is a struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("age: %f\n", d->age ? d->age : "(nil)");
printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
