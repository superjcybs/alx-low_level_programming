#include "main.h"
#include <unistd.h>
/**
 * _putchar - entry point
 *
 * @c: character to print here
 *
 * Description: writes the character of c
 *
 * Return: returns 1 if successful and -1 is failure
 */
int _putchar(char c)
{
	return (write(1, % c, 1));
}
