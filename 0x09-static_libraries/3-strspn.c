#include "main.h"
/**
 * *_strspn - to get the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, base;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		base = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				base = 1;
			}
		}
		if (base == 0)
		{
			return (k);
		}
	}

	return (0);
}
