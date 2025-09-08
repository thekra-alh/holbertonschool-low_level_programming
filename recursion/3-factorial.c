#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0) /* error case */
		return (-1);
	if (n == 0) /* base case */
		return (1);
	return (n * factorial(n - 1)); /* recursive step */
}
