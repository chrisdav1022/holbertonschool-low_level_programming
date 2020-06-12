#include <stdio.h>
/**
 * main - Print number combination
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int n1;

	for (n = 0; n <= 9; n++)
	{
		for (n1 = 0; n1 <= 9; n1++)
		{
			putchar(n + '0');
			putchar(n1 + '0');
			if (!(n == 9 && n1 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
