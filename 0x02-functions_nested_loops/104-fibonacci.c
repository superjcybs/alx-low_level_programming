#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int fibn1 = 1;
	int fibn2 = 2;
	int next;

	printf("%d, %d, ", fibn1, fibn2);

	for (int i = 3; i <= 98; i++)
	{
		next = fibn1 + fibn2;
		fibn1 = fibn2;
		fibn2 = next;

		if (i != 98)
		{
			printf("%d, ", next);
		} else
		{
			printf("%d\n", next);
		}
	}
	return (0);
}

