#include "main.h"
/**
 * print_line - entry point
 *
 * @n: how many of _ to print
 *
 * Desc: draws a straight line in the terminal
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
