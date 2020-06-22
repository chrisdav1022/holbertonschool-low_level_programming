#include "holberton.h"

/**
 * print_number - print the numbers in list
 *
 * @n:the numbers
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int c;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	else
		c = n;

	if (c / 10)
		print_number(c / 10);
	_putchar('0' + c % 10);
}
