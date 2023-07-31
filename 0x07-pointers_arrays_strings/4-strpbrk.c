#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: character to find
 * Return pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
