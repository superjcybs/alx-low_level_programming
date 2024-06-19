#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @size: array size
 * @cmp: pointer to the function used
 * @array: array in which to search
 * Return: returns -1 if no element match || if size is <=0; -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}

	return (-1);
}
