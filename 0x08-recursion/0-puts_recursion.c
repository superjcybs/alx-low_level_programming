#include "main.h"
/**
 * _puts_recursion - given in prototype
 * @s: the string that we are going to print
 * Desc: prints a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
