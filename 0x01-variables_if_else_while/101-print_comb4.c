#include <stdio.h>
/**
 * main - Entry point
 * Description:  program that prints different combinations of three digits.
 * Return: 0
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
for (k = 2; k <= 9; k++)
{
if (i != j && i != k && i < j && j < k)
{
putchar(48 + i);
putchar(48 + j);
putchar(48 + k);
if (i + j + k != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
