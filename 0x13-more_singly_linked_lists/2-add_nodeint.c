#include "lists.h"
/**
 * add_nodeint - will add a new node at the beginning of a linked list
 * @head: a pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: will return a pointer to the new node otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
