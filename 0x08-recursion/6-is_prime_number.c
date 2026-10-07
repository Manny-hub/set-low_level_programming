#include "main.h"

/**
 * is_prime_helper - recursively checks for a divisor of n
 * @n: the number to check
 * @i: the current candidate divisor being tested
 *
 * Return: 1 if no divisor was found up to sqrt(n), 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}
