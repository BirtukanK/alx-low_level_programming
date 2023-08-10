#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to allocate
 * Return: NULL or pointer to new space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1len, s2len, i;
char *newstr;
s1len = strlen(s1);
s2len = strlen(s2);
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
if (n > s2len)
	n = s2len;
newstr = malloc((s1len + n + 1) * sizeof(char));
if (newstr == NULL)
	return (0);
for (i = 0; i < s1len; i++)
{
newstr[i] = s1[i];
}
for (; i < (s1len + n); i++)
{
newstr[i] = s2[i - s1len];
}
newstr[i] = '\0';
return (newstr);
}
