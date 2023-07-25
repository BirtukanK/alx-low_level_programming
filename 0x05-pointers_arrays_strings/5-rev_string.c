#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverse a string
 * @s: character to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
int i, len, half;
char tmp;
for (len = 0; s[len] != '\0'; len++)
;
half = len / 2;
for (i = 0; i <= half; i++)
{
tmp = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = tmp;
}
}
