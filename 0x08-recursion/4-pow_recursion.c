#include "holberton.h"
/**
 * _pow_recursion - imprime el tipo de numero
 *@x: primer numero multiplicado
 *@y: numero al que multiplico x
 *Return: retorna el pow
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (0);
	}
}
