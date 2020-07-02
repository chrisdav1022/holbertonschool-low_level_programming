#include "holberton.h"
/**
 * _print_rev_recursion - revierte el array
 *@s: el valor del array - puntero
 *Return: retorna un valor vacio
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
