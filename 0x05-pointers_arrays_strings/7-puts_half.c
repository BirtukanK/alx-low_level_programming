#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string
 * @str: character to print
 * Return: nothing
 */
void puts_half(char *str)
{
int i, len;
len = strlen(str);
if (len % 2 == 0)
{
for (i = len/2; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
len = (len - 1)/2;
for (i = len / 2; i < len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
