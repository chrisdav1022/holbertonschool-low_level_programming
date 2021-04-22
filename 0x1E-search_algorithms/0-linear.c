#include "search_algos.h"

/**
 * linear_search - Search for the value in an array
 * @array: Pointer to the first element
 * @size: size to number to array
 * @value: Value search
 *
 * Return: valor alocated or -1 if it's not there
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
