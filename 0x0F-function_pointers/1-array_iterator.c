#include "function_pointers.h"
/**
 *
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || (*action) == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
