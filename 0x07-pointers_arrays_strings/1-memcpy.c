#include "holberton.h"

/**
 * *_memcpy - copy the memory area
 * @dest: pointer to dest
 * @src: dest pointer to pointer
 * @n: value whole
 * Return: return value to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
