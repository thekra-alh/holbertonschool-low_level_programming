#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase, then uppercase alphabet, followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    letter = 'A';
    while (letter <= 'Z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
    return (0);
}
