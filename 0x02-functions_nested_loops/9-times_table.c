#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, s, m;

	for (a = 0; a <= 9; a++)
	{
		for (s = 0; s <= 9; s++)
		{
			m = a * s;
			if ((m / 10) == 0)
			{
				if (s == 0)
				{
					_putchar('0');
				}

				if (s != 0)
				{
					_putchar(' ');
					_putchar((m % 10) + '0');
				}
				if (s < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				if (s < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
