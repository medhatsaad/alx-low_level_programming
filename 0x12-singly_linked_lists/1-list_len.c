# include "lists.h"
/**
 * list_len - print contents of linked lists
 * @h: linked list pointer
 *
 * Return: count of nodes
 */
size_t list_len(const list_t *h)
{
	list_t *p = h->next;
	int i = 0;

	if (h)
	{
		i++;
		while (p)
		{
			p = p->next;
			i++;
		}
	}
	else
		i = -1;
	return (i);
}
