#include "holberton.h"
/**
 * _strlen_recursion - cuenta el numero de caracteres
 *@s: puntero de los caracteres
 *Return: retorna el valor de strlen recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
