#include "holberton.h"

/**
 * *_strncpy - function copies the string pointed to by src
 * @dest: pointer dest
 * @src: source
 * @n: numbers
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for (c = 0 ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
