#include "lists.h"
/**
 * get_nodeint_at_index - to find the location of a node in a list
 * @head: pointer to first node on the inst
 * @index: node's index
 * Return: NULL is node doesn't exist otherwise returns the address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

