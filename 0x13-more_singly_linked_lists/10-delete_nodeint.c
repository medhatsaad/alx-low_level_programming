# include "lists.h"
# include <stdlib.h>
/**
 * delete_nodeint_at_index - delete value at index
 * @head: list address
 * @index: index
 *
 * Return: fail -1 success +1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	p = get_index(*head, index - 1);
	if (p)
	{
		temp = (p->next)->next;
		free(p->next);
		p->next = temp;
	}
	return (1);
}

/**
 * get_index - return address of node at index
 * @p: list
 * @index: index
 *
 * Return: node address
 */
listint_t *get_index(listint_t *p, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (p->next == NULL)
			break;
		p = p->next;
	}
	if (i == index)
		return (p);
	else
		return (NULL);
}
