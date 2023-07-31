#include "main.h"
#include <string.h>
/**
 * _strspn - a functin that gets the length of a prefix stbstring
 * @s: string from which we get the initial segment
 * @accept: bytes consisted in s
 * Return: number of byes in initial segment of string
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
