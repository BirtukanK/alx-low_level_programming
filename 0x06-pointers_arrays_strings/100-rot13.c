#include "main.h"
/**
 * rot13 - function that encodes aa string using rot13
 * @s: string to encode
 * Return: encoded character
 */
char *rot13(char *s)
{
int i, j;
char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 54; j++)
{
if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == input[j])
{
s[i] = output[j];
break;
}
}
}
return (s);
}
