#include "holberton.h"
/**
 * puts_half - print the last half string
 *
 *@str:pointer print the last half
 */
void puts_half(char *str)
{
	int a, length;

	length = 0;
	for (a = 0; str[a] != '\0'; a++)
		length++;

	for (a = (length + 1) / 2; a < length; a++)
		_putchar(str[a]);

	_putchar('\n');
}
