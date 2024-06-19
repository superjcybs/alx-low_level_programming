#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success it returns 1 and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
