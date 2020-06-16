#include "holberton.h"
/**
 * _islower - print islower to z or a
 *
 * @c: int c
 *
 * Return: return 1 to if and 0 run.
 */
int _islower(int c)
{

	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
