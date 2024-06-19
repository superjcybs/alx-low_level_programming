#include "main.h"
#include <stdio.h>
/**
 * *_strchr - to locate a character in a string
 * @s: the  string to search
 * @c: character to find
 * Return: either the character is found or not
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
		return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
