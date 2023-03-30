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
	char b, c;

	for (i = 0; a[i] != '\0'; i++)
	{
		b = a[i - 1];
		c = a[i];
		if (c >= 97 && c <= 122)
			if (!(b >= 48 && b <= 57))
				if (!((b >= 65 && b <= 90) || (b >= 97 && b <= 122)))
					a[i] = a[i] - 32;
	}
	return (a);

}
