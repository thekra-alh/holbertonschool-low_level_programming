#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line each time.
 */
void print_alphabet_x10(void)
{
    int i, j;
    char alphabet[27];

    /* Fill the alphabet array with a-z */
    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
    }
    alphabet[26] = '\0'; /* Null-terminate the string */

    for (j = 0; j < 10; j++)
    {
        int k = 0;
        while (alphabet[k] != '\0')
        {
            _putchar(alphabet[k]);
            k++;
        }
        _putchar('\n');
    }
}
