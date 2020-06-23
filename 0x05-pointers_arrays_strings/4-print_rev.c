#incluude "holberton.h"

/**
 * print_rev - print rev array
 *
 * @s: pointer to rev
 */

void print_rev(char *s)
{
	int a, l;

	l = 0;
	for (a = 0; s[a] != '\0'; a++)
		l++;

	for (a = l - 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
