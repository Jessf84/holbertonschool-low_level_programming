#include "function_pointers.h"

/** 
 * print_name - Prints a name using a supplied function
 * @name: Name to print
 * @f: Function used to print the name
 * */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
