#include "holberton.h"

/**
 * one_sqrt - imprime la raiz cuadrada del numero
 *@n1: entero a imprimir
 *@n2: numero de la raiz de n
 * Return: retorna la raiz
 */
int one_sqrt(int n1, int n2)
{
	if (n1 * n1 == n2)
	{
		return (n1);
	}
	if (n1 * n1 > n2)
	{
		return (-1);
	}
	if (n1 * n1 != n2)
	{
		return (one_sqrt(n1 + 1, n2));
	}
	else
	{
		return (0);
	}
}
/**
 * _sqrt_recursion - la raiz del numero final
 * @n: entero de la raiz
 * Return: imprime la raiz cuadrada en n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (one_sqrt(1, n));
}
