#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long int intType;
float floatType;
double doubletype;
char charType;
long long longType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
