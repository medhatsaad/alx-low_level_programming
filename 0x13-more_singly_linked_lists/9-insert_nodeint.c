# include "lists.h"
# include <stdlib.h>
/**
 * insert_nodeint_at_index - insert vlue n at index
 * @head: address of list
 * @idx: index
 * @n: value
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *y;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	y = malloc(sizeof(listint_t));
	if (y)
	{
		y->n = n;
		if (idx == 0)
		{
			y->next = (*head)->next;
			*head = y;
			return (y);
		}

		for (i = 0; i < idx - 1; i++)
		{
			if (p->next == NULL)
				break;
			p = p->next;
		}

		if (i != idx - 1)
			return (NULL);

		y->next = p->next;
		p->next = y;
		return (y);
	}
	else
		return (NULL);
}
