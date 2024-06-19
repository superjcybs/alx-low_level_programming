#include "variadic_functions.h"
/**
 * print_all - this will prints anything
 * @format: will list of types of arguments passed to
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list numlist;

	va_start(numlist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
			printf("%s%c", sep, va_arg(numlist, int));
				break;
			case 'i':
			printf("%s%d", sep, va_arg(numlist, int));
				break;
			case 'f':
			printf("%s%f", sep, va_arg(numlist, double));
				break;
			case 's':
				str = va_arg(numlist, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
			}
		sep = ", ";
		i++;
		}
	}

	printf("\n");
	va_end(numlist);
}
