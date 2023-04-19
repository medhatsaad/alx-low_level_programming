# include "function_pointers.h"
# include <stddef.h>
/**
 * array_iterator - run function on each item of array
 * @array: array
 * @size: size of array
 * @action: function to run
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
