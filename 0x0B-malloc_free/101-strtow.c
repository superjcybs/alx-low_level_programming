#include <stdlib.h>
#include "main.h"
/**
 * count_word - code starts here
 * Desc: this function counts the number of words in a string
 * @s: the string in question
 * Return: the number of words found
 */
int count_word(char *s)
{
	int noted, c, w;

	noted = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			noted = 0;
		else if (noted == 0)
		{
			noted = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - start code here
 * Desc: this function will split a string into words
 * @str: the string to be splited
 * Return: a pointer or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
	{
		if (c)
		{
		end = i;
		tmp = (char *) malloc(sizeof(char) * (c + 1));
			if (tmp == NULL)
				return (NULL);
			while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
		}
	}
	else if (c++ == 0)
		start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
