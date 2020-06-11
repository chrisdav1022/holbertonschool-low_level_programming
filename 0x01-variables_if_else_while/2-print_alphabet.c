#include <stdio.h>
#include <unistd.h>
/**
 *
 *
 *
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
