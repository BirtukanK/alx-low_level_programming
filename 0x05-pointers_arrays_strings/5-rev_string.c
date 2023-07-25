#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverse a string
 * @s: character to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
int i, len;
char tmp;
len = strlen(s);
for (i = 0; i <= len / 2; i++)
{
tmp = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = tmp;
}
}
