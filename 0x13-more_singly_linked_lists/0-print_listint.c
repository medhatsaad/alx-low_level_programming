/**
 * print_listint - print all elements of list
 * @h: list
 *
 * Return: number of elements
 */
# include "lists.h"
# include <stdio.h>
# include <stddef.h>
size_t print_listint(const listint_t *h)
{
	listint_t *p;
	size_t i = 1;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	p = h->next;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
