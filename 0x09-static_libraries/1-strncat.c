#include "main.h"
/**
 * _strncat - entry point
 *
 * Desc: concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no. of bytes from source to be appended
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
