#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of an array
 * @c: character to create an array
 * Return: pointer or array
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int position;
if (size == 0)
	return (NULL);
s = (char *) malloc(size * sizeof(c));
if (s == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(s + position) = c;
position++;
}
return (s);
}
}
