/**
 * listint_len - print all elements of list
 * @h: list
 *
 * Return: number of elements
 */
# include "lists.h"
# include <stdio.h>
# include <stddef.h>
size_t listint_len(const listint_t *h)
{
	listint_t *p;
	size_t i = 1;

	if (h == NULL)
		return (0);
	p = h->next;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
