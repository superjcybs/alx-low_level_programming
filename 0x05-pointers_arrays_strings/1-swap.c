#include "main.h"
/**
 * swap_int - entry point
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
