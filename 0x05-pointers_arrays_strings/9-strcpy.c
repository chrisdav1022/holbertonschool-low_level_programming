#include "holberton.h"

/**
 * *_strcpy - copy the array src or array to the destination chain
 * @dest: pointer destination
 * @src: fuente del puntero
 * Return: return to destination
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
		dest[y] = src[y];
	dest[y] = src[y];

	return (dest);
}
