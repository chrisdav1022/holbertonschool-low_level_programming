#include "holberton.h"
/**
 * print_last_digit - print last digit
 *
 * @n: my number
 *
 * Return: Returns 0.
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;

	if (n < 0)
		c = c * -1;

	_putchar(c + '0');

	return (c);
}
