#include "search_algos.h"

/**
 * binary_search - searches for a value.
 * @array: Pointer to the first element.
 * @size: Number of elements in array.
 * @value: Value to search.
 * Return: The first index where value is located or -1 if values is NULL.
 **/

int binary_search(int *array, size_t size, int value)
{

  size_t l = 0, r = size - 1, i = 0;
  int j;

  if (!array || !size)
    {
      return (-1);
    }

  while (l <= r)
    {
      printf("Searching in array: ");

      for (i = l; i < r; i++)
	{
	  printf("%d, ", array[i]);
	}
      printf("%d\n", array[r]);

      j = (r + l) / 2;

      if (array[j] == value)
	return (j);

      else if (array[j] > value)
	r = j - 1;

      else
	l = j + 1;
    }
  return (-1);
}
