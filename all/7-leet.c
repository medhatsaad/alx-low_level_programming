# include "main.h"
/**
 * leet - code
 *
 * @a: string pointer
 *
 * Return: string
 */
char *leet(char *a)
{
	char list[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int i[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int j, k;

	for (j = 0; a[j] != '\0'; j++)
	{
		for (k = 0; list[k] != '\0'; k++)
			if (a[j] == list[k])
			{
				a[j] = i[k];
				break;
			}
	}
	return (a);
}
