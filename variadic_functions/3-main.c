#include "variadic_functions.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
	print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
	print_all("qwertyuopadghjklzxvbnm");
	print_all("");
	print_all(NULL);
	print_all("fcsi", 3.14435, 'H', NULL, 402);
	return (0);
}
