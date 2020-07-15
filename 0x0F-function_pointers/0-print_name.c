#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
