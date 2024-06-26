#include "main.h"
#include <stdio.h>
/**
 * clear_bit - will set the value of a bit to 0 at a given index
 * @n: is the pointer to decimal number to be changed
 * @index: is the index position to change
 * Return: 1 if successful or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;
		if ((*n >> index) & 1)
		*n -= i;

	return (1);
}

