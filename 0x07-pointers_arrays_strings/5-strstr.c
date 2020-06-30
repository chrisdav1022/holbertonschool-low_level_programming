#include "holberton.h"
/**
 * *_strstr - imprime y compara la subcadena
 *@haystack: cadena principal
 *@needle: nombre de la subcadena
 *Return: retorna el valor total de la subcadena
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = 0;
	char *b = 0;

	while (haystack[a] != '\0')
	{
		if (needle[b] != '\0' && haystack[a] == needle[b])
			b++;
		else
			break;
		a++;
	}
	if (needle[b] == '\0')
		return (haystack + (a - b));

	return (0);
}
