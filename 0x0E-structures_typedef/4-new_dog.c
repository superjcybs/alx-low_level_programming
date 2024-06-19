#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - beginning of code
 * Desc: find the length of a string
 * @str: the said string to be measured
 * Return: returns length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - this will copy a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by destination
 * @dest: buffer for storing the string copy.
 * @src: source string
 * Return: returns a pointer to destination
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - this will create a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: returns the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcopy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcopy(newdog->owner, owner);

	return (newdog);
}
