#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabets in lower case using putchar
 *
 * Return: returns 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
