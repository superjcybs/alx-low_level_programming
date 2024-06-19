#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the 50 fibonacci numbers
 *
 * Return: return 0
 */
int main(void)
{
	long int i, num1, num2, next;

	num1 = 1;

	num2 = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (num1 != 20365011074)
		{
			printf("%ld, ", num1);
		} else
		{
			printf("%ld\n", num1);
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	return (0);
}
