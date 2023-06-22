#include "monty.h"
#include <ctype.h>
/**
 * is_valid_integer - Checks if a string represents a valid integer
 * @str: The string to validate
 *
 * Return: 1 if the string is a valid integer, 0 otherwise
 */
int is_valid_integer(const char *str)
{
	int i = 0;

	if (str == NULL || *str == '\0')
		return (0); /* Not a valid integer */

	/* Check if the string represents a valid integer */

	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0); /* Not a valid integer */
	}

	return (1); /* Valid integer */
}

