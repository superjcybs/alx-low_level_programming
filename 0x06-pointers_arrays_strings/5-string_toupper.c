#include "main.h"
/**
 * string_toupper - entry point
 *
 * Desc: changes all lowercase letters of a string to uppercase
 *
 * @str: what to change
 * Return: the result
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
