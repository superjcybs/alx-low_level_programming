#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digits in base 10
 *
 * Return: returns 0
 */
int main(void)
{
	int sdinb10;

	for (sdinb10 = 0; sdinb10 < 10; sdinb10++)
	putchar((sdinb10 % 10) + '0');
	putchar('\n');
	return (0);
}
