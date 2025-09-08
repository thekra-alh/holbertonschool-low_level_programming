#include "main.h"

/**
 * _is_prime_helper - checks if n is divisible by i
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)       /* no divisors found, n is prime */
		return (1);
	if (n % i == 0)      /* divisor found, not prime */
		return (0);
	return (_is_prime_helper(n, i + 1)); /* check next divisor */
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0 and 1 and negatives are not prime */
	return (_is_prime_helper(n, 2)); /* start checking from 2 */
}
