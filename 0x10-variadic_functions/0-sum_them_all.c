#include "variadic_functions.h"
/**
 * sum_them_all - sum all values in the string
 * @n: cost of sum
 * Return: return value the sum
 */
int sum_them_all(const unsigned int n, ...)
{
        va_list valist;
        int sum = 0;
        unsigned int i = 0;

        va_start(valist, n);

	if (n == 0)
		return (0);
        
	while (i < n)
        {
                sum += va_arg(valist, int);
		i++;
	}
        va_end(valist);

 
       return (sum);
}
