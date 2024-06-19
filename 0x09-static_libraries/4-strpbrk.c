#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - entry point
 * Desc: searches a string for any of a set of byte
 * @s: string to search
 * @accept: string containing the byte
 * Return: returns a pointer to the byte in s that matches it
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
