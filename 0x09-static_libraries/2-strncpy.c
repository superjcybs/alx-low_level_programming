#include "main.h"
/**
 * _strncpy - entry point
 * Desc: copies a string
 * @dest: destination
 * @src: source
 * @n: no of byte to copy
 * Return: a pointer to the resultings str dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;
	for (i = 0; src[0] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
