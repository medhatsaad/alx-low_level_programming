#include "main.h"

/**
 * myprint - print 4 digits
 * @m: int
*/
void myprint(int m)
{
	int unit;
	int ten;
	int hundrid;
	int thousand;

	thousand = m / 1000;
	hundrid = (m - thousand * 1000) / 100;
	ten = (m - thousand * 1000 - hundrid * 100) / 10;
	unit = m % 10;
	if (thousand == 0)
	{
		if (hundrid == 0)
		{
			if (ten == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ten);
			}
		}	
		else
		{
			_putchar(' ');
			_putchar('0' + hundrid);
			_putchar('0' + ten);
		}	
	}
	else
	{
		_putchar('0' + thousand);
		_putchar('0' + hundrid);
		_putchar('0' + ten);
	}
	_putchar('0' + unit);
}

/**
 * print_times_table - time table
 * @n: int
 */
void print_times_table(int n)
{
	int time;
	int i;
	int m;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (time = 0; time < n; time++)
			{
				m = i * time;
				if (time  == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else
				{	
					myprint(m);
					_putchar(',');
				}
			}
			myprint(i * n);
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
