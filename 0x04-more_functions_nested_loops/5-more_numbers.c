#include "holberton.h"

/**
 *more_numbers - print more number
 */

void more_numbers(void)
{
	int n, nn;

	for (n = 0; n <= 9; n++)
	{
		for (nn = 0; nn <= 14; nn++)
		{
			if (nn > 9)
			{
				_putchar((nn / 10) + '0');
			}
			_putchar((nn % 10) + '0');
		}
		_putchar ('\n');
	}
}
