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

	va_start(vas, n);

	for (i = 0; i < n; i++)
	{
		if (vas == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", va_arg(vas, char *));

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vas);
}
