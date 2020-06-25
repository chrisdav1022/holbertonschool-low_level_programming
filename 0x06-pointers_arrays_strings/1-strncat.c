#include "holberton.h"

/**
 * *_strncat - fulfills the same function as strcat
 * @n: count numbers to bytes
 * @dest: dest
 * @src: source
 * Return: return total value
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n && dest[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
