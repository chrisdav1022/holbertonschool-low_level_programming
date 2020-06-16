#include "holberton.h"
/**
 *print_sign - print sing
 *
 * @n: print sign 1, -1, 0.
 *
 *Return: Returns 0.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
