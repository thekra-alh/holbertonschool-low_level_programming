#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints lowercase alphabet except 'e' and 'q'
* using only putchar (twice max)
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
continue;

putchar(ch);
}

putchar('\n');

return (0);
}
