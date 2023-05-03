# include "lists.h"
/**
 * sum_listint - sum values
 * @head: list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (p->next != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	sum += p->n;
	return (sum);
}
