#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
