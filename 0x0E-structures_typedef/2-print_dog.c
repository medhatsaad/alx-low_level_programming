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
		printf("Name: %s\n", ((d->name == NULL) ? "(nill)" : d->name));
		printf("Age: %0.1f\n",  d->age);
		printf("Owner: %s\n", ((d->owner == NULL) ? "(nill)" : d->owner));
	}
}
