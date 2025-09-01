#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len > 0)
		_putchar(s[--len]);

	_putchar('\n');
}
