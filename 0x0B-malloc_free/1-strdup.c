#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * @str: string to return its pointer
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{
char *newstr;
int i = 0, j;
if (!str)
	return (NULL);
while (*(str + i))
	i++;
i++;
newstr = malloc(sizeof(char) * 1);
if (newstr == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
newstr[j] = str[j];
}
return (newstr);
}
