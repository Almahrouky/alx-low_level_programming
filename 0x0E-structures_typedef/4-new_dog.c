#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - is a functio
 * @des: is some thing
 * @src: is some thing
 * Return: some thing
 */
char *_strcpy(char *des, char *src)
{
int i;
for (i = 0; src[i]; ++i)
{
des[i] = src[i];
}
des[i] = '\0';
return (des);
}

/**
 * new_dog - is a function
 * @name: is the naem
 * @age: ia age
 * @owner: is owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
return (dog);
}
