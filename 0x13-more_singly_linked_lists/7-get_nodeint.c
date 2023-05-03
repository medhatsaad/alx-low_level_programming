# include "lists.h"
/**
 * get_nodeint_at_index - get addreess of index
 * @head: list
 * @index: index
 *
 * Return: list address at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		p = p->next;
		if (p == NULL)
			break;
	}

	if (i == index)
		return (p);
	else
		return (NULL);
}
