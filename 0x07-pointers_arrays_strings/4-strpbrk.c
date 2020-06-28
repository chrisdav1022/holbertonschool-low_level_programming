#include "holberton.h"
/**
 * *_strpbrk - compara varios espacios en array
 *@s:valor de puntero pricipal
 *@accept:valor a compara con s
 *Return: retorna el valor de s y accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (0);
}
