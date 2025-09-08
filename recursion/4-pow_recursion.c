#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: x^y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* error case */
		return (-1);
	if (y == 0) /* base case: any number to power 0 is 1 */
		return (1);
	return (x * _pow_recursion(x, y - 1)); /* recursive step */
}
