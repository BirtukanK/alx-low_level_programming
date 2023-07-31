#include "main.h"
#include <string.h>
/**
 * _memset - a function tat fills memory with a constant byte
 * @s: character pointer
 * @b: constant byte
 * @n: number of bytes of the memory
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
s = memset(s, b, n);
return (s);
}
