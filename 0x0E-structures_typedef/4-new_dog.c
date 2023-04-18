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
	char *a;
	char *b;
	int sizea, sizeb;
	dog_t *c;

	a = name;
	b = owner;
	sizea = 0;
	sizeb = 0;
	(a == NULL) ? sizea = 0 : (sizea = namesize(a));
	(b == NULL) ? sizeb = 0 : (sizeb = namesize(b));
	c = malloc(sizeof(dog_t));
	if (c)
	{
		if (a == NULL)
			c->name = NULL;
		else
		{
			c->name = malloc((sizea + 1) * sizeof(char));
			if (c->name)
				copyname(a, sizea, c->name);
			else
				return (NULL);
		}
		c->age = age;
		if (b == NULL)
			c->owner = NULL;
		else
		{
			c->owner = malloc((sizeb + 1) * sizeof(char));
			if (c->owner)
				copyname(b, sizeb, c->owner);
			else
				return (NULL);
		}
		return (c);
	}
	else
		return (NULL);
}

/**
 * copyname - copy string
 * @x: source string
 * @size: size
 * @y: destination
 * Return: 0
 */
int copyname(char *x, int size, char *y)
{
	int i;

	for (i = 0; i < size; i++)
		y[i] = x[i];
	y[size] = '\0';
	return (0);
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
