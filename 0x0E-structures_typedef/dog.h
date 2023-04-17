#ifndef DOG_H
#define DOG_H
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - is a struct
 * @name: is a pointer char
 * @age: ia an float
 * @owner: is a pointer char
 * Description: some thing
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif
