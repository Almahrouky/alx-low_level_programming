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
 * _strlen - is a function
 * @s: is a pointer char
 * Return: int
 */
int _strlen(char *s)
{
int len, i;
len = 0;
for (i = 0; s[i]; ++i)
{
len++;
}
return (len);
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
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->age = malloc(sizeof(float));
if (dog->age == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog->age);
free(dog);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
return (dog);
}
