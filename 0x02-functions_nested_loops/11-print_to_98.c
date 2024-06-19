#include <stdio.h>
/**
 * print_to_98 - start point
 *
 * Description: prints all naturnal number from where user
 * inputs to 98
 *
 * @n: where to begin counting
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
