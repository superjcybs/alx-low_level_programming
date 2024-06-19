#include "main.h"
/**
 * factorial - this will return the factorial of a number given
 * @n: number to find the factorial
 * Return: the factorial of the number or an error
 */
int factorial(int n)
{
	int resfac = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	resfac *= factorial(n - 1);
	return (resfac);
}
