#include "lists.h"
/**
 * free_listint2 - frees a listint_list
 * @head: pointer to the head of of the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

