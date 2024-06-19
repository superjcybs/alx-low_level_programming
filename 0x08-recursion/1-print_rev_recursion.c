#include "main.h"
/**
 * _print_rev_recursion - entry point of code started as prototype
 * Desc: prints string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
