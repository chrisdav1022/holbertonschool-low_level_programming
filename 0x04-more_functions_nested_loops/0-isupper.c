#include "holberton.h"
/**
 * _isupper - print 1 if it is uppercase
 * @c: content number
 * Return: 1 if is uppercase and 0 if is lowercase
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
		return (1);
	return(0);
}
