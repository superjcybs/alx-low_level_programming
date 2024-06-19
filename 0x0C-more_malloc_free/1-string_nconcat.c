#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - code start
 * Desc: a function to concatenate two strings
 * @s1: first string
 * @s2: last string
 * @n: no of bytes
 * Return: either a pointer to the result or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		result = malloc(sizeof(char) * (length1 + n + 1));
	else
		result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!result)
		return (NULL);

	while (i < length1)
	{
		result[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		result[i++] = s2[j++];

	while (n >= length2 && i < (length1 + length2))
		result[i++] = s2[j++];

	result[i] = '\0';

	return (result);
}
