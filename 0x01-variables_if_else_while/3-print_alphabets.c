#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet in lower and upper case
 *
 * Return: returns list
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

