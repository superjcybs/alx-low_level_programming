#include "main.h"
int is_divisible(int num, int div);
int is_prime_numer(int n);
/**
 * is_divisible - will check if a number is divisible by a given number
 * @num: number to check
 * @div: the divisor
 * Return: returns 0 is its divisible or 1 is its not
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: returns 0 is its not prime or 1 if the number is prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
