#include "holberton.h"

/**
 *main - Entry point
 *
 *Return: (0) Always
 */

int main(void)
{
	long n, n1;

	n = 612852475143;

	for (n1 = 2; n > n1; n1++)
	{
		while (n % n1 == 0)
		{
			n = n / n1;
		}
	}
	printf("%lu", n1);
	putchar('\n');
	return (0);
}
