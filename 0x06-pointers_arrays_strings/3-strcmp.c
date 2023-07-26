#include "main.h"
#include <string.h>
/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: Second string
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, result;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
result = s1[i] - s2[i];
return (result);
}
