#include "holberton.h"

/**
 * print_square - print square of numeral
 * @
 *
 */

void print_square(int size)
{
	int n;
	int p;

	for (n = 0; n < size; n++)
	{	
		for (p = 0; p < size; p++)
		{
			_putchar('#');	
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
