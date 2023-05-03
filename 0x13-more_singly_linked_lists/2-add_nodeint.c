# include "lists.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * add_nodeint - add node at beginning
 * @head: list
 * @n: value
 *
 * Return: list pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p)
	{
		p->n = n;
		p->next = *head;
		*head = p;
		return (p);
	}
	else
		return (NULL);
}
