#include "main.h"
#include <string.h>
/**
 * _memcpy - a function that copies memory area
 * @dest: destnation memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
dest = memcpy(dest, src, n);
return (dest);
}
