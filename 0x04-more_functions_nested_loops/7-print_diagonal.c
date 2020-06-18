#include "holberton.h"

/**
 * print_diagonal - print diagonal 
 * @n: print diagonal and spaces
 */

void print_diagonal(int n)
{
	int c = 0;
	int s;

	while (c < n)
	{
		s = 0;
		while (s < c)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
	}
	if (n <= 0)
		_putchar('\n');
}
