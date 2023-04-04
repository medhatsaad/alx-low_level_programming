# include "main.h"
/**
 * set_string - get address of pointer and change its value
 *
 * @s: pointer address
 * @to: string
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
