#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet in reverse manner
 *
 * Return: retuns 0
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
