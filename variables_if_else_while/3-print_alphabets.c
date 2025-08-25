#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, then uppercase, followed by a newline
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
