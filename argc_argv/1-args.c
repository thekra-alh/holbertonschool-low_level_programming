#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* suppress unused variable warning */
	printf("%d\n", argc - 1);

	return (0);
}
