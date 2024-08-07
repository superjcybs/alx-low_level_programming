#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a pointer to the first element on the list
 * Return: returns 0 if list is empty or print the deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

