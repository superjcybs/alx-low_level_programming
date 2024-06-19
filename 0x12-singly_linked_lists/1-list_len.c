#include "lists.h"
#include <stdlib.h>
/**
 * list_len - will return the number of element in list
 * @h: the list
 * Return: the number of element
 */
size_t list_len(const list_t *h)
{
	size_t elementtotal = 0;

	while (h)
	{
		elementtotal++;
		h = h->next;
	}

	return (elementtotal);
}
