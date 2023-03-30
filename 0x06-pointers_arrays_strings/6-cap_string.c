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
	int i, j;
	char l[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}', '"'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (a[i - 1] == l[j])
				if (a[i] >= 97 && a[i] <= 122)
				{
					a[i] = a[i] - 32;
					break;
				}
}
	}
	return (a);

}
