#include "holberton.h"
/**
 * print_array - print the elements to n in training
 *@a: training array
 *@n: print the numbers
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	printf("\n");
}
