# include "lists.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * add_nodeint_end - add node at end
 * @head: list
 * @n: value
 *
 * Return: list pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *m = *head;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p)
	{
		p->n = n;
		p->next = NULL;
		if (*head == NULL)
		{
			*head = p;
			return (p);
		}
		while (m->next != NULL)
		{
			m = m->next;
		}
		m->next = p;
		return (p);
	}
	else
		return (NULL);
}
