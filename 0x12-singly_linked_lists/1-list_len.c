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
	int i = 1;

	if (h)
	{
		while (p)
		{
			p = p->next;
			i++;
		}
		return (i);
	}
	return (0);
}
