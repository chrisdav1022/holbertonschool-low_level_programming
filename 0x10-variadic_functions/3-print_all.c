#include "variadic_functions.h"

/**
 * print_all - print the all in int, char, double and pointer char
 * @format: format the string
 * Return: return void
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int j, i = 0;
	char *c;

	while (format)
	{
		va_start(var, format);
		while (format[i])
		{
			j = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(var, int));
				break;
			case 'i':
				printf("%d", va_arg(var, int));
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				break;
			case 's':
				c = va_arg(var, char *);
				if (!c)
					c = "(nil)";
				printf("%s", c);
				break;
			default:
				j = 0;
				break;
			}
			if (format[i + 1] && j)
				printf(", ");
			i++;
		}
		va_end(var);
		break;
	}
	printf("\n");
}
