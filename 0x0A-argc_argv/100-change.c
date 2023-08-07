#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int res, cent;
res = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
if (cent < 0)
{
printf("%d\n", 0);
return (0);
}
if (cent % 25 >= 0)
{
res += cent / 25;
cent = cent % 25;
}
if (cent % 10 >= 0)
{
res += cent / 10;
cent = cent % 10;
}
if (cent % 5 >= 0)
{
res += cent / 5;
cent = cent % 5;
}
if (cent % 2 >= 0)
{
res += cent / 2;
cent = cent % 2;
}
if (cent % 1 >= 0)
{
res += cent / 1;
}
printf("%d\n", res);
return (0);
}
