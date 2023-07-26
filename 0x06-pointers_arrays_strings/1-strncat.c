#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatinates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
dest = strncat(dest, src, n);
return (dest);
}
