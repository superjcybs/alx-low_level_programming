#include "main.h"
/**
 * rev_string - to reverse a string
 *
 * @s: the string to be worked on
 *
 * Return: returns the reversed string
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
}
}
