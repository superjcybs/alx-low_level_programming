#include "main.h"
#include <unistd.h>
/**
 * _putchar - entry point of code
 * Desc: to write the character c to standard output
 * @c: this is the character to print
 * Return: 1 if successful and -1 if unsuccessful
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
