#include "main.h"
/**
 * reverse_array - entry point
 * Desc: reverses the content of an array of integers
 * @a: array of integers to be worked on
 * @n: no. of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
