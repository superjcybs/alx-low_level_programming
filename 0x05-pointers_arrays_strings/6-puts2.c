#include "main.h"
/**
 * puts2 - entry point
 *
 * Desc: prints a char out of a string
 * @str: string containing the characters needed
 */
void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
