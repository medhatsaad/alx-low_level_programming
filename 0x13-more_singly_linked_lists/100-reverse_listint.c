# include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: list address
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	/* setup Node 0  */
	if ((*head)->next == NULL)
		return (*head);
	n = (*head)->next;
	(*head)->next = NULL;
	/* Setup nodes*/
	while (n->next != NULL)
	{
		temp = n->next;
		n->next = *head;
		*head = n;
		n = temp;
	}
	/* setup last node*/
	n->next = *head;
	*head = n;
	return (*head);
}
