#include <stdio.h>
/**
 * main - Entry point
 * Description: this program that prints numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int i = 0;
char lower;
while (i < 10)
{
putchar(48 + i);
i++;
}
for (lower = 'a'; lower <= 'f'; lower++)
{
putchar(lower);
}
putchar('\n');
return (0);
}
