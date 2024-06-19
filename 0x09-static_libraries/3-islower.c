#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: checks if c is lowercase then returns 1 otherwise
 * @c: checking for c
 * Return: returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
