# include "dog.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *a = name;
	char *b = owner;
	dog_t *c;

	c = malloc(sizeof(dog_t));
	if (c)
	{
		if (a == NULL)
			c->name = NULL;
		else
		{
			c->name = malloc((namesize(a) + 1) * sizeof(char));
			if (c->name)
				copyname(a, c->name);
			else
			{
				free(c);
				return (NULL);
			}
		}
		c->age = age;
		if (b == NULL)
			c->owner = NULL;
		else
		{
			c->owner = malloc((namesize(b) + 1) * sizeof(char));
			if (c->owner)
				copyname(b, c->owner);
			else
			{
				free(c);
				return (NULL);
			}
		}
		return (c);
	}
	else
		return (NULL);
}

/**
 * copyname - copy string
 * @x: source string
 * @y: destination
 * Return: 0
 */
void copyname(char *x, char *y)
{
	int i;
	int size = namesize(x);

	for (i = 0; i < size; i++)
		y[i] = x[i];
	y[size] = '\0';
}
/**
 * namesize - size of string
 * @s: string
 * Return: size int
 */
int namesize(char *s)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}
