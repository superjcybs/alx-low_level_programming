#include "main.h"
/**
 * _memset - will fill memory with a constant byte
 * @s: memory to fill
 * @b: character to copy
 * @n: no.of times to copy the character
 * Return: the pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
