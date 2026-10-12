#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Description: handles any number of + and - signs before the
 * number, ignores leading non-digit characters, and stops at the
 * first non-digit character after the number begins.
 *
 * Return: the converted integer, or 0 if no digits are found
 */
int _atoi(char *s)
{
	int i, sign, result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
		result = -result;

	return (result);
}
