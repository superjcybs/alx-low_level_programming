#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - to print a name
 * @name: name to be printed
 * @f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
