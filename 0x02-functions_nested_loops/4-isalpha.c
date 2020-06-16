#include "holberton.h"
/**
 *_isalpha - print alpha
 *
 * @c: int c is alpha
 *
 *Return: Returns 0.
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
