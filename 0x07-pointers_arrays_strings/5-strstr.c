#include "main.h"
#include <string.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: string to find the substring from
 * @needle: substring to find
 * Return: pointer to the beginnign of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
