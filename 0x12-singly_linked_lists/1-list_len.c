# include "lists.h"
/**
 * list_len - print contents of linked lists
 * @h: linked list pointer
 *
 * Return: count of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
