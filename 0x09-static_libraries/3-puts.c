#include "main.h"
/**
 * _puts - entry point
 *
 * Desc: prints a string
 *
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
