#include "holberton.h"
/**
 * *malloc_checked - checked to malloc
 * @b: signed b from space of memory
 * Return: return value of malloc
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
