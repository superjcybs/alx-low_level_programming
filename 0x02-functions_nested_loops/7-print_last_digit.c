#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: prints the last digit of a number
 *
 * @n: the number to find
 *
 * Return: returns the number
 */
int print_last_digit(int n)
{
	int ldn = n % 10;

	if (ldn < 0)
		ldn *= -1;

	_putchar(ldn + '0');

	return (ldn);
}
