#include "holberton.h"

/**
 * reverse_array - revert array to string
 * @a: pointer to string
 * @n: int to revert
 * Return: return none
 */

void reverse_array(int *a, int n)
{
	int y = 0;
	int c = 0;

	n = n -1;
	for (y = 0; y <= n; y++)
	{
		c = a[y];
		a[y] = a[n];
		a[n] = c;
		n--;
	}
}
