`#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Description: Custom implementation of the strncpy behavior
 *              from the C standard library.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
