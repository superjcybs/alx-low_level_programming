#include "main.h"
/**
 * _strlen - entry point
 *
 * Desc: tells the length of a string
 *
 * @str: what string to count
 *
 * Return: returns the length of the said string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
