#include "variadic_functions.h"

/**
 * print_strings - print the string
 * @separator: pointer to string
 * @n: pointer to number of elements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vas;
	unsigned int i;
	char *c;

	va_start(vas, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(vas, char *);

		if (c != NULL)
			printf("%s", c);

		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vas);
}
