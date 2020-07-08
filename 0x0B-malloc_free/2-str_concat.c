#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - Appends a string
 *@s1:point to first char
 *@s2:point second char
 *Return:return NULL and value c
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int a, i, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{}

	for (i = 0; s2[i] != '\0'; i++)
	{}
	i = i + 1;
	b = i + a;

	c = malloc(b * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];

	for (a = 0; s2[a] != '\0'; a++)
	c[i + a] = s2[a];

	return (c);
}
