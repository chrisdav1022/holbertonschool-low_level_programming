#include "holberton.h"
/**
 * flip_bits - number bits to revert
 * @n: value numbers
 * @m: long int value
 * Return: return value revert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size0 sizeof(n) * 8, count = 0, i = 0;
	unsigned long int j = 1;

	n ^= m;
	while (count < size)
	{
		if (n & j)
		{
			i++;
		}
		i <<= 1;
		count++;
	}
	return (i);
}
