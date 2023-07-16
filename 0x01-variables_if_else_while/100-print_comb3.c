#include <stdio.h>
/**
 * main - main block
 * Description: prints all combination of numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (i != j && i < j)
{
putchar(48 + i);
putchar(48 + j);
if (i + j != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
