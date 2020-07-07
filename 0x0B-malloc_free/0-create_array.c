
#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - value of creation array
 *@size: the size of the memory to print
 *@c:value of array
 *Return:return value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int ind;
	char *a;

	a = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < size; ind++)
	{
		a[ind] = c;
	}
	return (a);

}
