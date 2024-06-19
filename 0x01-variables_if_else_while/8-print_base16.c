#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all numbers of base 16 in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	char alphabets;

	for (i = 0; i < 10; i++)
		putchar ((i % 10) + '0');
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
