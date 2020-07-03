#include "holberton.h"

/**
 * _str_recursion - cuenta desde el inicio de la cadena
 * @s: recorre la cadena
 * Return: retorna el valor del array
 */

int _str_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_str_recursion(s + 1) + 1);
	}
}

/**
 * palindrome - funcion recursiva para imprimir el palindrome
 * @s: puntero del array
 * @init: primer caracter del array
 * @end: ultimo caracte de array
 *
 * Return: retorna si el valor es palindromo 1 si no 0
 */

int palindrome(char *s, int init, int end)
{
	if (s[init] != s[end])
	{
		return (0);
	}
	if (init >= end)
	{
		return (1);
	}
	return (palindrome(s, init + 1, end - 1));
}
/**
 * is_palindrome - imprime si los valores son palindromos o no
 * @s: revisa la cadena
 * Return: retorna el valor en 1 si es palindromo si no retorna 0
 */

int is_palindrome(char *s)
{
	int end = _str_recursion(s);

	if (!palindrome(s, 0, end - 1))
	{
		return (0);
	}
	return (1);
}
