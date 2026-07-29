#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Function used to print the name
 *
 * Description: Calls a function to print a name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
