#include <stdio.h>
/**
 * main - entry point
 * Desc: will print all the arguments it receives
 * @argc: no. of arguments
 * @argv: array of pointers to the arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
