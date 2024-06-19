#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concats two strings
 * @s1: concat from
 * @s2: concat to
 * Return: either a pointer to the new location or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, leni = 0, lenj = 0;

	while (s1 && s1[leni])
		leni++;
	while (s2 && s2[lenj])
		lenj++;

	s3 = malloc(sizeof(char) * (leni + lenj + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < leni)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (leni + lenj))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
