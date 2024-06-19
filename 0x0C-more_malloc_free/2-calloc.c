#include "main.h"
#include <stdlib.h>
/**
 * _calloc - to allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *member;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	member = malloc(size * nmemb);

	if (member == NULL)
		return (NULL);

	filler = member;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (member);
}
