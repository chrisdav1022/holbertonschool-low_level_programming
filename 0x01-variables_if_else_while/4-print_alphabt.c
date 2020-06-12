#include <stdio.h>
/**
 * main - entry point
 *
 *  Return: always 0.
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' || n == 'q')
		{
		}
		else
			putchar(n);
	}
	putchar ('\n');
	return (0);
}
