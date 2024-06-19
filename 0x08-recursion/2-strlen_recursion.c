#include "main.h"
/**
 * _strlen_recursion - start point
 * Desc: tells me the length of a string
 * @s: the string in question
 * Return: returns the length of the given string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
