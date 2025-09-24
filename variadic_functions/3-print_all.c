#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything, based on format string
* @format: List of types of arguments passed to the function
*
* Return: 0 (SUCCESS)
*/
int print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *str, *sep = "";
	char types[] = {'c', 'i', 'f', 's'};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j])
			{
				printf("%s", sep);
				if (j == 0)
					printf("%c", va_arg(args, int));
				if (j == 1)
					printf("%d", va_arg(args, int));
				if (j == 2)
					printf("%f", va_arg(args, double));
				if (j == 3)
				{
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
				}
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
	return (0);
}
