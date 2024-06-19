#include "main.h"
#include <unistd.h>
/**
 * _putchar - entry point
 *
 * Desc: writes the character c to stdout
 *
 * @c: character to print
 *
 * Return: returns 1 if successful and -1 is failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
