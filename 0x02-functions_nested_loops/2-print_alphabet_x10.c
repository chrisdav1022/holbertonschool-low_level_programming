#include "holberton.h"

/**
 * print_alphabet_x10 - print 10 alphabet.
 *
 * Return: none
 */

void print_alphabet_x10(void)
{
	int n;
	char abc;

	for (n = 0; n <= 9; n++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar ('\n');
	}
}
