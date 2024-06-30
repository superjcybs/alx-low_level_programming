#include "main.h"
#include <stdio.h>
/**
 * flip_bits - will flip bits to convert one number to another number
 * @n: is the first number
 * @m: is the second number to convert to
 * Return: the number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
