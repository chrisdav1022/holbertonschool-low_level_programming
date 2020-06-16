#include "holberton.h"

/**
 * times_table - times table init in 0
 *
 * Return: Returns none.
 */

void times_table(void)
{
	int n, n1, nm;

	for (n = 0; n <= 9; n++)
	{
		for (n1 = 0; n1 <= 9; n1++)
		{
			nm = n * n1;
			if (n1 == 0)
			{
				_putchar(mn + '0');
			}
			else if (mn <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mn + '0');
			}
			else if (mn >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mn / 10 + '0');
				_putchar(mn % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
