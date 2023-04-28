# include "lists.h"
# include <string.h>
/**
 * add_node_end - add node to list
 * @head: linked list
 * @str: string inserted
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *new = malloc(sizeof(list_t *));
	char *p;

	if (str == NULL)
		return (NULL);
	if (new)
	{
		p = strdup(str);
		if (p)
			new->str = strdup(str);
		else
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(str);
		new->next = NULL;
		if (*head == NULL)
			*head = new;
		else
		{
			n = *head;
			while (n->next != NULL)
			{
				n = n->next;
			}
			n->next = new;
		}
		return (*head);
	}
	return (NULL);
}

/**
 * _strlen - string length
 * @s: string
 * Return: size
 */
unsigned int _strlen(const char *s)
{
	unsigned int size = 0;

	while (s[size])
	{
		size++;
	}
	return (size);
}
