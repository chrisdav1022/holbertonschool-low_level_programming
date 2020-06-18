#include "holberton.h"
/**
 *print_most_numbers - Entry point
 *
 *
 *Return: Returns 0 upon successful run.
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{
		}
		else
		{
			_putchar (n);
		}
	}
	_putchar ('\n');
}
