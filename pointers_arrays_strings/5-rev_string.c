#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* احسب طول السلسلة */
	while (s[len] != '\0')
		len++;

	/* عكس الأحرف داخل السلسلة */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
