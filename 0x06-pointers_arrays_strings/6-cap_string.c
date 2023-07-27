#include "main.h"
/**
 * cap_string - a function which capitalize string
 * @c: string to change
 * Return: character
 */
char *cap_string(char *c)
{
int i, j, flag;
char sep[] = ",\t;\n;.!?\"(){}";
for (i = 0; c[i] != '\0'; i++)
{
flag = 0;
if (i == 0)
{
flag = 1;
}
else
{
for (j = 0; sep[j] != '\0'; j++)
{
if (c[i - 1] == sep[j])
{
flag = 1;
break;
}
}
}
if (flag == 1)
{
if (c[i] <= 'z' && c[i] >= 'a')
{
c[i] = c[i] - ('a' - 'A');
}
}
}
return (c);
}
