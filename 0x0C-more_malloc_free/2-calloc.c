#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory
 * @nmemb: integer
 * @size: integer
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *newarr;
if (nmemb == 0 || size == 0)
	return (0);
newarr = malloc(nmemb * size);
if (newarr == NULL)
	return (NULL);
return (newarr);
}
