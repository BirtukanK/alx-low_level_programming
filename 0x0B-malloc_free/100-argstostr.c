#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: NULL or pointer to a string
 */
char *argstostr(int ac, char **av)
{
char *newstr;
int i, j, k = 0;
if (ac == 0 || av == NULL)
	return (NULL);
newstr = malloc(ac * sizeof(av));
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
newstr[k] = av[i][j];
k++;
}
newstr[k] = '\n';
k++;
}
if (newstr == NULL)
	return (NULL);
return (newstr);
}
