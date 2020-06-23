#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int c, length;

	length = 0;
	for (c = 0; s[c] != '\0'; c++)
		length++;
	return (length);
}
