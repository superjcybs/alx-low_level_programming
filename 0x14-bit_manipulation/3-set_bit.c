#include "main.h"
/**
 * set_bit - will set the value of a bit to 1 at a given index
 * @n: is the decimal number passed by pointer
 * @index: is the index position to change starting from 0 of the bit
 * Return: 1 if successful or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}

