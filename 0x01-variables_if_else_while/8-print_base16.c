#include <stdio.h>
/**
 * main - Entry point
 * Description: this program that prints numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(48 + i);
i++;
}
char ch;
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
