#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry of code
 * Desc: concatenates all arguments of the program.
 * @ac: argument to count
 * @av: pointer to array
 * Return: either a pointer of new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, w, size;
	char *arg;

	size = 0;
	w = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[w] = av[i][j];
			j++;
			w++;
		}
		arg[w] = '\n';
		w++;
		i++;
	}
	arg[w] = '\0';
	return (arg);
}
