#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: no. of arguments passed
 * Return: returns 0 is n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numlist;

	va_start(numlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numlist, int);

	va_end(numlist);

	return (sum);
}
