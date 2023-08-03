#include "main.h"
/**
 * _strlen_recursion - a function that returns length of a string
 * @s: a string to find its length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s > '\0')
{
count += _strlen_recursion(s + 1) + 1;
}
return (count);
}
