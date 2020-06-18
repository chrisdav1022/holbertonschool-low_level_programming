#include "holberton.h"
/**
 * _isdigit - print 1 if is digit
 * @c: contains digit 1 and 0 if is alpha
 * Return: return 0 and 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
