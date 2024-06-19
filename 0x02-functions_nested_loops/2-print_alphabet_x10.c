#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times in lowercase
 *
 * Description: prints 10 times
 *
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabets;

	while (count++ <= 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);

		_putchar('\n');
	}
}
