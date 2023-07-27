#include "main.h"
/**
 * leet - a function that encodes a string in to 1337
 * @s: a string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
int i, j;
char small[] = "aeiou";
char capital[] = "AEIOU";
char nums[] = "43071";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == small[j] || s[i] == capital[j])
{
s[i] = nums[j];
break;
}
}
}
return (s);
}
