#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: check is the character
 * @c: is lower or uppercase
 *
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
