#include <stdio.h>
/**
 * main -  Entry point
 * Description: print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char rev = 'z';
while (rev >= 'a')
{
putchar(rev);
rev--;
}
putchar('\n');
return (0);
}
