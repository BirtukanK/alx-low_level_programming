#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @c: a string to change
 * Return: uppercase letters
 */
char *string_toupper(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] <= 'z' && c[i] >= 'a')
c[i] = c[i] - 32;
}
return (c);
}
