#include "holberton.h"

/**
 * clear_bit - value bit 0
 * @n: value long int
 * @index: value int
 * Return: return -1 if does not match or 1 if values They're right
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
