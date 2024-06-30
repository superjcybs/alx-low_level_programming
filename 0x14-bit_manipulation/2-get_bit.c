#include "main.h"
#include <stdio.h>
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit to work on
 * @index: The index to get the value at, this starts from 0
 * Return: either the value of the bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
