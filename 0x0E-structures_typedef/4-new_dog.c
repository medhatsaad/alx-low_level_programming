# include "dog.h"
# include <stdlib.h>
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

	c = malloc(namesize(a) + namesize(b) + 4);
	if (c)
	{
		c->name = a;
		c->age = age;
		c->owner = b;
		return (c);
	}
	else
		return (NULL);


}

/**
 * namesize - size of string
 * @s: string
 * Return: size int
 */
int namesize(char *s)
{
	int size = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}
