#include "holberton.h"

/**
 * array_range - range the arrays and variables
 *@min: the variable min
 *@max: variable max
 *Return: pointer c array range
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *c;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
		return (NULL);
	for (; min <= max; min++, i++)
		*(c + i) = min;
	return (c);
}
