#include "holberton.h"

/**
 * *_memset - memory full of bytes
 * @s: pointer
 * @b: point the char
 * @n: add value to remove negative
 * Return: return value to pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
