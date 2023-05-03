# include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: list address
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *next_node;
	listint_t *p;

	if (head == NULL && *head == NULL)
		return (NULL);
	/* setup Node 0  */
	p = *head;
	next_node = p->next;
	(*head)->next = NULL;
	/* Setup nodes*/
	while (next_node->next != NULL)
	{
		temp = next_node->next;
		next_node->next = p;
		p = next_node;
		next_node = temp;
	}
	/* setup last node*/
	next_node->next = p;
	*head = next_node;
	return (*head);
}
