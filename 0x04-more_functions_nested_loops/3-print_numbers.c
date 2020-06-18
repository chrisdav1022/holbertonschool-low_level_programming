#include "holberton.h"

/**
 * print_numbers - print numbers from 1 to 9.
 *
 * Return: none
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar(10);
}
