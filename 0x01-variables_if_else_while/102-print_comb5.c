#include <stdio.h>
/**
 * main - entry point
 * Description: A program to print combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + j);
putchar('0' + j + 1);
putchar(',');
}
}
return (0);
}
