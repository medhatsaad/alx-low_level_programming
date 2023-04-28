# include "lists.h"
# include <string.h>
/**
 * add_node - add node to list
 * @head: linked list
 * @str: string inserted
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
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
			return (NULL);
		new->len = _strlen(str);
		if (*head == NULL)
			new->next = NULL;
		else
			new->next = *head;
		*head = new;
		return (new);
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
