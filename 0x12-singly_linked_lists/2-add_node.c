#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - This will add a new node at the beginning of the list
 * @head: pointer to the list
 * @str: the new string to add
 * Return: address of the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
