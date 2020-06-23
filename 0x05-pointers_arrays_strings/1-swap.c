#include "holberton.h"

/**
 * swap_int - intercambia el valor de los enteros
 *@a: valor que se cambia a b
 *@b: valor que se cambia a a
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
