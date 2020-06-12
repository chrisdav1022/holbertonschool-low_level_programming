#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1;
	int n;
	int c;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n = n1 + 1; n <= 9; n++)
		{
			for (c = n + 1; c <= 9; c++)
			{
				putchar(n1 + '0');
				putchar(n + '0');
				putchar(c + '0');
				if (n1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
