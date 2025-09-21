#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything based on format
* @format: A list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str, *sep = "";
	char fmts[] = {'c', 'i', 'f', 's'};
	void (*printers[4])(va_list) = {
		[](va_list a) { printf("%c", va_arg(a, int)); },
		[](va_list a) { printf("%d", va_arg(a, int)); },
		[](va_list a) { printf("%f", va_arg(a, double)); },
		[](va_list a)
		{
			str = va_arg(a, char *);
			printf("%s", str ? str : "(nil)");
		}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != fmts[j])
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			printers[j](args);
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
