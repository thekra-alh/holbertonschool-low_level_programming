#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything based on format string
* @format: A list of types of arguments passed to the function
*
* Return: 0 (Success)
*/
int print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
	return (0);
}
