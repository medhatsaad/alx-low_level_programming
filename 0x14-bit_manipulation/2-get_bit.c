# include "main.h"
/**
 * get_bit - git bit value at index
 * @n: number
 * @index: index
 *
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = n, i;
	int reminder;

	for (i = 0; i <= index; i++)
	{
		reminder = number % 2;
		number /= 2;
		if (number == 0)
			break;
	}
	if ((i == index + 1) || (number == 0 && i == index))
		return (reminder);
	else
		return (-1);


}
