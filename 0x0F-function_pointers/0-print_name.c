#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name of the pointer
 * @f: pointer to a function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
