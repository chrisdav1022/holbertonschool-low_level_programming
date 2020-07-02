#include "holberton.h"
/**
 * first_prime - main del primer numero primo a definir
 * @num: numero inicial
 * @num1: numero final
 * Return: retorna el numero final
 */
int first_prime(int num, int num1)
{
	if (num * num == num1)
	{
		return (0);
	}
	if (num * num > num1)
	{
		return (1);
	}
	if (num * num != num1)
	{
		return (first_prime(num + 1, num1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - imprime si el numero es primo
 * @n: numero
 * Return: retorna el resultado del numero primo
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (first_prime(1, n));
}
