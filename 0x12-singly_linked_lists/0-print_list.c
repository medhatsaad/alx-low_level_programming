# include "lists.h"
/**
 * print_list - print contents of linked lists
 * @h: linked list pointer
 *
 * Return: count of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p;
	int i = 0;

	if (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str );
		p = h->next;
		i++;
		
		while (p)
		{
			if (p->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", p->len, p->str);
			p = p->next;
			i++;
		}
	return (i);
	}
	return (0);
}
