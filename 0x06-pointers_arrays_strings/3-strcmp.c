#include "holberton.h"

/**
 * _strcmp - returns an integer less than
 * @s1: pointer hello number char
 * @s2: pointer world count char
 * Return: return int
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
			return ((int) s1[c] - s2[c]);
	}
	return (0);
}
