#include "lists.h"
#include <stdlib.h>
/**
 * free_list - To free a linked list
 * @head: the list
 * No returns
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
