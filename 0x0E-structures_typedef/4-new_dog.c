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
	int sizea, sizeb;
	dog_t *c;

	c = malloc(sizeof(dog_t));
	if (c)
	{
		(a == NULL) ? sizea = 0 : (sizea = namesize(a));
		c->name = malloc((sizea + 1) * sizeof(char));
		if (c->name)
			(a == NULL) ? (c->name[0] = '\0') : copyname(a, c->name);
		else
		{
			free(c);
			return (NULL);
		}
		c->age = age;
		(b == NULL) ? sizeb = 0 : (sizeb = namesize(b));
		c->owner = malloc((sizeb + 1) * sizeof(char));
		if (c->owner)
			(b == NULL) ? (c->owner[0] = '\0') : copyname(b, c->owner);
		else
		{
			free(c);
			free(c->name);
			return (NULL);
		}
		return (c);
	}
	else
	{
		free(c);
		return (NULL);
	}
}

/**
 * copyname - copy string
 * @x: source string
 * @y: destination
 * Return: 0
 */
int copyname(char *x, char *y)
{
	int i;
	int size = namesize(x);

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
