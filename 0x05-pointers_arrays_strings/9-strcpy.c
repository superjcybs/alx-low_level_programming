#include "main.h"
/**
 * _strcpy - start point
 * @dest: where to copy the string
 * @src: source of the string to copy
 * Desc: copies a string to a pointed destination
 *
 * Return: pointe to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
