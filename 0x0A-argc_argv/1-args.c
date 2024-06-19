#include <stdio.h>
/**
 * main - entry point
 * Desc: will print the number of arguments passed into it
 * @argc: no. of arguments
 * @argv: array of pointers to the arguments
 * Return: returns 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
