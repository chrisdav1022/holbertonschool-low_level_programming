#include "holberton.h"
/**
 * argstostr - concatena todos los punteros
 * @ac:first argument
 * @av:pointer to pointer
 * Return: return value NULL
 */
char *argstostr(int ac, char **av)
{
	char *ar, *arr;
	int i, j, t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, t = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, t++)
			;
		t++;
	}
	t++;

	ar = malloc(t * sizeof(char));
	if (ar == NULL)
		return (NULL);

	arr = ar;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ar = av[i][j];
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (arr);
}
