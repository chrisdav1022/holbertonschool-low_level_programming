#include "holberton.h"
/**
 * print_binary - print numberes binary
 * @n: value content decimal numbers
 * Return: return value binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int container = 0, i = 0, mul = 1;

	if (!b)
	{
		return (0);
	}

	while (b[i])
	{
		while (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	while (i > 0)
	{
		if (b[i - 1] == '1')
		{
			container += mul;
		}
		mul *= 2;
		i--;
	}
	return (container);
}
