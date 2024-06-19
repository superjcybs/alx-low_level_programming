#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 *
 * Desc: prints user input as an elements of an array
 *
 * @a: the array
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
