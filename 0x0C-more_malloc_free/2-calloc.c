#include "holberton.h"
/**
 * _calloc - check the code.
 *@nmemb: the variable
 *@size: another variable
 *Return: dest
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = nmemb * size;
	c = malloc(i);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = 0;
	return (c);
}
