#include "3-calc.h"

/**
 * op_add - gives the sum of two integers
 * @a: integer first
 * @b: integer second
 * Return: retunrs the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gives the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
