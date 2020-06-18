#include "holberton.h"

/**
 * print_line - Entry point
 * @n: give me the number
 */

void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
