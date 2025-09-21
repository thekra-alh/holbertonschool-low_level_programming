#include "function_pointers.h"
#include <stddef.h> /* For NULL */

/**
* print_name - Prints a name using a function pointer.
* @name: The name to be printed.
* @f: A function pointer that takes a char * and returns void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
