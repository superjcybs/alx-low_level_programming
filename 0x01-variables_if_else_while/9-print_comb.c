#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single digit numbers
 * in ascending order
 *
 * Return: returns 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar((numbers % 10) + '0');
		if (numbers == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
		return (0);
}
