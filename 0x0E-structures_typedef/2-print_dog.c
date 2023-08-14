#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a structure
 * @d: name of structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d->age);
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
