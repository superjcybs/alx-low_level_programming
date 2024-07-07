#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list to search
 * Return: The address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *here, *fast;

	if (!head)
		return (NULL);

	while (here && fast && fast->next)
	{
		fast = fast->next->next;
		here = slow->next;
		if (fast == here)
		{
			here = head;
			while (here != fast)
			{
				here = here->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

