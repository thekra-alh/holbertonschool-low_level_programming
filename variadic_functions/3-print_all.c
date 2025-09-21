#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything based on a format string
* @format: List of argument types passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (format[i] && (format[i] != 'c' && format[i] != 'i' &&
			format[i] != 'f' && format[i] != 's'))
			i++;

		if (!format[i])
			break;

		printf("%s", separator);

		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			str = (str != NULL) ? str : "(nil)";
			printf("%s", str);
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
