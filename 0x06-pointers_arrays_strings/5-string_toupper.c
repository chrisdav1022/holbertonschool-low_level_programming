#include "holberton.h"

/**
 * *string_toupper - change from uppercase to lowercase
 *@src: pointer to char
 *Return: return src
 */


char *string_toupper(char *src)
{
	int a;

	for (a = 0; src[a] != '\0')
	{
		if (srrc[a] >= 97 && src[a] <= 122)
			src[a] = src[a] - 32;
	}
	return (src);
}
