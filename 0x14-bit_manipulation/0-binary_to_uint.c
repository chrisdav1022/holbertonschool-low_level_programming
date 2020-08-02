#include "holberton.h"
/**
 * print_binary - print numberes binary
 * @n: value content decimal numbers
 * Return: return value binary
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		i = i << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			i = i | 1;
		b++;
	}
	return (i);
}
