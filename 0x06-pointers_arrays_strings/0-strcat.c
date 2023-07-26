#include "main.h"
#include <string.h>
/**
 * _strcat - a function to concatinate two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
dest = strcat(dest, src);
return(dest);
}
