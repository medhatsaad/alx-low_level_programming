# include "lists.h"
# include <stdlib.h>
/**
 * pop_listint - pop head
 * @head: list address
 *
 * Return: poped item
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->n;
	p = *head;
	*head = (*head)->next;
	free(p);
	return (i);
}

