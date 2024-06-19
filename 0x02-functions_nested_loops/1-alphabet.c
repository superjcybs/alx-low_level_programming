#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Prints lowercase alphabets using putchar
 *
 * Returns: Always 0
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	_putchar(alphabets);

	_putchar('\n');
}
