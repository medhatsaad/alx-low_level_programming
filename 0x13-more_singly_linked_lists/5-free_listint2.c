# include "lists.h"
# include <stdlib.h>
/**
 * free_listint2 - delete list
 * @head: list address
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head != NULL)
	{
		if (*head != NULL)
		{
			while ((*head)->next != NULL)
			{
				p = (*head)->next;
				free(*head);
				*head = p;
			}
		}
		free(*head);
	}
	*head = NULL;
}
