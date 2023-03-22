#include "main.h"

/**
 * times_table - print times table 0 to 9
 */
void times_table(void)
{
	int num;
	int time;

	for (num = 0; num < 10; num++)
	{
		for (time = 0; time < 10; time++)
		{
			if ( (num * time) / 10 == 0)
				_putchar(' ');
			else
				_putchar('0' + (num * time) / 10);
			_putchar('0' + (num * time) % 10);
			if (time != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
