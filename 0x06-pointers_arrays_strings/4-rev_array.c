#include "holberton.h"

/**
 * reverse_array - revert array to string
 * @a: pointer to string
 * @n: int to revert
 * Return: return none
 */

void reverse_array(int *a, int n)
{
	int y;
	int c;

	for (y = 0; y <= n; y++)
	{
		c = a[y];
		a[y] = a[n - 1];
		a[n] = c;
		n--;
	}
}
