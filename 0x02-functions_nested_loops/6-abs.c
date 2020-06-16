#include "holberton.h"

/**
 * _abs - print abs
 *
 * @n: my abs
 *
 * Return: Returns 0.
 */

int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
