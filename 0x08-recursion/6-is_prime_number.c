#include "main.h"

/**
 * prime_helper - ...describe what it does...
 * @n: ...the number being tested...
 * @divisor: ...the candidate divisor currently being tried...
 *
 * Return: ...1 or 0, and when each happens...
 */
int prime_helper(int n, int divisor)
{
	if (/* condition: divisor squared has gone past n */)
		return (/* no divisor found, so what is n? */);
	if (/* condition: divisor divides n evenly */)
		return (/* found a factor, so what is n? */);
	return (/* try the next divisor */);
}

/**
 * is_prime_number - ...describe what it does...
 * @n: ...describe the parameter...
 *
 * Return: ...what does it return?...
 */
int is_prime_number(int n)
{
	if (/* condition: n is too small to be prime */)
		return (/* what is it? */);
	return (/* call the helper with the smallest sensible divisor */);
}
