#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
