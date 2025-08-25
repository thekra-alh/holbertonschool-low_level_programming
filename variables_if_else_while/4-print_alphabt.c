#include <stdio.h>
/**
* main - prints the alphabet in lowercase, then uppercase, followed by a newline
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e' || c == 'q')
continue;
putchar(c);
}
putchar('\n');
return (0);
}
