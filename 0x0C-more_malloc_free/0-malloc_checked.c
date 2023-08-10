#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory
 * @b: integer
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
void *new;
new = malloc(b);
if (new == NULL)
	exit(98);
return (new);
}
