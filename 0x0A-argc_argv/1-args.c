#include <stdio.h>

/**
 * main - imprime la cadena
 *@argc:numero de argumentos
 *@argv:argumento en  el programa
 *Return: retorna el valor total
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i + 1 == argc)
			printf("%i\n", i);
	}
	return (0);
}
