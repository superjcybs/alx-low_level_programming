#include "main.h"
/**
 * _strcat - entry point
 * Desc: concatenates two string
 * @dest: string to append to
 * @src: string to append
 * Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
