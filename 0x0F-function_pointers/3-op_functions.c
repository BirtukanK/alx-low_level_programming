#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function which adds two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - a function which subtruct two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - a function which multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - a function which divide two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 * op_mod - a function which modulus two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
