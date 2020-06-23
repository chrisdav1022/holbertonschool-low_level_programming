#include "holberton.h"
/**
 * rev_string - rev string
 *
 *@s: array revert
 */

void rev_string(char *s)
{
	int a, l;
	char c;

	l = 0;
	for (a = 0; s[a] != '\0'; a++)
		l++;

	for (a = 0; a < l; a++)
	{
		c = s[a];
		s[a] = s[l - 1];
		s[l - 1] = c;
		l--;
	}
}
