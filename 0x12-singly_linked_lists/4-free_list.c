# include "lists.h"
# include <stdlib.h>
/**
 * free_list - free linked list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			next = head->next;
			free(head->str);
			free(head);
			head = next;
		}
		free(head->str);
		free(head);
	}
}
