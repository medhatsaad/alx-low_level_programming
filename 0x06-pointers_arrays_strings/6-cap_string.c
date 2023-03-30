# include "main.h"
/**
 * cap_string - capitalize
 *
 * @a: string refence
 * Return: pointer to string
 *
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if ((i == 0 || a[i - 1] == ' ') && (a[i] >= 97 && a[i] <= 122))
			a[i] = a[i] - 32;
	return (a);

}
