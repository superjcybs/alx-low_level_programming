#include <stdio.h>
#include <stdlib.h>
/**
 * main - will prints the multiplication of two numbers
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: will return 0 if it receives 2 arguments otherwise 1
 */
int main(int argc, char *argv[])
{
	int number1, number2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);
	return (0);
}
