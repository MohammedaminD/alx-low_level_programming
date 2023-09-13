#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name given
 * @f: pointer to a void return type function
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
