#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of listint_t list to work on
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

