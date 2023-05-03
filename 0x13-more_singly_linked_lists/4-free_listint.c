# include "lists.h"
# include <stdlib.h>
/**
 * free_listint - delete list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			p = head->next;
			free(head);
			head = p;
		}
	}
	free(head);
}
