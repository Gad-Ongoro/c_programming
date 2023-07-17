#include "dog.h"

#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog to initialize
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: SUCCESS
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
