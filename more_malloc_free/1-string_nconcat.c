#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, taking at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to newly allocated string (s1 + first n bytes of s2)
 *         NULL if allocation fails
 *         Treat NULL as empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[len1 + n] = '\0';

	return (concat);
}
