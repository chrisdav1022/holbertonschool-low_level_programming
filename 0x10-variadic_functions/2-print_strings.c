#include "variadic_functions.h"
/**
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vas;
	int i = 0;

	va_start(vas, n);

	while (i < n)
	{
		if (vas == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", va_arg(vas, char*));

		if (separator && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(vas);
}
