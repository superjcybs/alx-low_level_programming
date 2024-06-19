#include "main.h"
#include <stddef.h>
/**
 * _strlen - entry point
 *
 * Desc: tells the length of a string
 *
 * @s: what string to count
 *
 * Return: returns the length of the said string
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
