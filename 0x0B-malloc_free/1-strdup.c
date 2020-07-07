
#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - duplicate a string
 *@str: string pointer
 *Return:return value NULL and pointer a
 */
char *_strdup(char *str)
{
	unsigned int i, n;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{}

	a = malloc(n + 1 * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	return (a);
}
