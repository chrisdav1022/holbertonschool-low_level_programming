#include "holberton.h"
/**
 * get_bit - print binary.
 *@n: variable
 *@index: index
 *Return: counter
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
