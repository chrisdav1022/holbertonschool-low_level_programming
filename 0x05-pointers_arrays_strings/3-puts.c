#include "holberton.h"
/**
 * _puts - print the strings on array.
 *
 * @str: the pointer of the value in array.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
