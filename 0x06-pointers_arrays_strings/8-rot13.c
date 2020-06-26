#include "holberton.h"
/**
 * rot13 - rot13 cambia los caracteres de a hasta z por n hasta m,
 * como si el alfabeto estubiera a la mitad
 *@n: pointer to char
 *Return: return n
 */
char *rot13(char *n)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = rot[j];
				break;
			}
		}
	}

	return (n);
}
