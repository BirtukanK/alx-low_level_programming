#include "dog.h"
/**
 * init_dog - a function that initialize a variable
 * @d: name of structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: noting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
