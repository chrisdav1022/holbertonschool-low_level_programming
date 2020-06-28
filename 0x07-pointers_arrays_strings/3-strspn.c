#include "holberton.h"
/**
 * _strspn - compara las cadenas
 *@s:primer variable
 *@accept:variable a comparar
 *Return: valor total
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}

			if (accept[b + 1] == '\0')
			{
				return (a);
			}
		}
	}
	return (0);
}
