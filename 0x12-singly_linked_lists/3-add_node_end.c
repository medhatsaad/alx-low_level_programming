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
	list_t *last;
	list_t *new = malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		if (new->str == NULL)
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
			last = *head;
			while (last->next != NULL)
			{
				last = last->next;
			}
			last->next = new;
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
