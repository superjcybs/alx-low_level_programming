#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: returns 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
