# include "dog.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * print_dog - print structure
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %0.1f\n",  d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
