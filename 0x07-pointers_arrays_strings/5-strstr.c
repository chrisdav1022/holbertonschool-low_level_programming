#include "holberton.h"
/**
 * *_strstr - imprime y compara la subcadena
 *@haystack: cadena principal
 *@needle: nombre de la subcadena
 *Return: retorna el valor total de la subcadena
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*b == *haystack && *b != '\0' && *haystack != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack = c + 1;
	}
	return (NULL);
}
