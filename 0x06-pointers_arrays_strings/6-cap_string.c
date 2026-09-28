#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int should_cap;

	should_cap = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (should_cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
			should_cap = 1;
		else
			should_cap = 0;
	}

	return (str);
}
