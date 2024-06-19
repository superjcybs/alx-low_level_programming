#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - code start
 * Desc: to allocate memory using malloc
 * @b: no. of bytes to be allocated
 * Return: a pointer the the new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocation = malloc(b);

	if (allocation == NULL)
		exit(98);
	return (allocation);
}
