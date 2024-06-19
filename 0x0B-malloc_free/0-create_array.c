#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry point
 * Desc: creates an array of chars, and initializes with specific char
 * @size: size of array
 * @c: the char in quesiton
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
