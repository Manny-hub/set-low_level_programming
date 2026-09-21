#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print half of
 *
 * Description: prints the second half of the string. If the
 * number of characters is odd, prints the last n characters,
 * where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int len, start, i;

	len = 0;
	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
