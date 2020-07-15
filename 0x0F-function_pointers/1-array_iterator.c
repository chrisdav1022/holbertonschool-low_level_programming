#include "function_pointers.h"

/**
 * array_iterator - iterator of array
 * @array: pointer to array
 * @size: size to size
 * @action:pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || (*action) == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
