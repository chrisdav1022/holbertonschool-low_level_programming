#include "holberton.h"

/**
 * set_bit - set of bit to bit
 * @n: pointer to numbers
 * @index: value to bit
 * Return: return value -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
