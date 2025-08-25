#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase,
* then in uppercase using putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower;
char upper
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');
return (0);
}
