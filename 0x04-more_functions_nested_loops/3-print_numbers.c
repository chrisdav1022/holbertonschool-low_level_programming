#include "holberton.h"

/**
 * print_numbers - print numbers from 1 to 9.
 *
 * Return: none
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
