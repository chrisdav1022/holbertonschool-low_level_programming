#include "holberton.h"
/**
 * factorial - imprime el factorial
 *@n: numero del factorial
 *Return: retorna el valor total del factor
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
