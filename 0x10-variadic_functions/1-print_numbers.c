#include "variadic_functions.h"
/**
 * print_numbers - code start
 * Desc: prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numlist;

	va_start(numlist, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(numlist, int));
		else if (separator && i == 0)
			printf("%d", va_arg(numlist, int));
		else
			printf("%s%d", separator, va_arg(numlist, int));
	}

	va_end(numlist);
	printf("\n");
}
