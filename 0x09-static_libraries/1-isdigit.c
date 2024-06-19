#include "main.h"
/**
 * _isdigit - entry point
 * @c: number to check
 * Desc: check for a digit from 0 through 9
 *
 * Return: returns either 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
	return (0);
}
