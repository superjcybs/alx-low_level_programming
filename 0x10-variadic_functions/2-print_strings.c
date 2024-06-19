#include "variadic_functions.h"
/**
 * print_strings - this will prints strings
 * @separator: to separate various strings
 * @n: indicates the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;

	va_list numlist;

	va_start(numlist, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(numlist, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && index == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(numlist);
}
