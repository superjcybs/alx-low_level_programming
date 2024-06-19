#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - to reallocates a memory block using malloc and free
 * @ptr: the pointer to the memory previsouly allocated by malloc
 * @old_size: the size of the allocated memory for ptr
 * @new_size: the new size of the new memory block
 * Return: the pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			newptr[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newptr[i] = old_ptr[i];
	}

	free(ptr);
	return (newptr);
}
