#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to a variable and prints
 * whether it is positive, negative, or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* n is a random number, this line should not be modified */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
